#!/bin/bash
set -o nounset

if [ $# -eq 0 ]; then
    echo "Usage: test.sh <question>"
    exit 1
fi

function summary() {
    IFS=' ' read -r -a array <<< "$g_failed_cases"
    begin=${array[0]}
    end=${array[0]}
    i=1
    len=${#array[@]}
    while [ "$i" -lt "$len" ]; do
        next=${array[$i]}
        prev=${array[$((i - 1))]}
        if [ "$next" -ne "$((prev + 1))" ]; then
            end=$prev
            if [ "$begin" -eq "$end" ]; then
                g_summary="$g_summary$begin "
            else
                g_summary="$g_summary$begin-$end "
            fi
            begin=$next
        fi
        end=$next
        i=$((i + 1))
    done
    if [ "$begin" -eq "$end" ]; then
        g_summary="$g_summary$begin "
    else
        g_summary="$g_summary$begin-$end "
    fi
}

function control_c() {
    if [ -e "$out" ]; then
        rm -f "$out"
    fi
}

function make_temp() {
    if [ "$(uname)" == "Darwin" ]; then
        out=$(mktemp -t "$PROG")
    else
        out=$(mktemp --suffix="$PROG")
    fi
}

trap control_c INT

PROG=$1
if [ ! -e "$PROG" ]; then
    echo "$PROG does not exist. Have you compiled it with make?"
    exit 1
fi

declare -A time_limit
time_limit["sierpinski"]=1s

num_failed=0
i=1
g_failed_cases=""
g_summary=" "

while true; do
    if [ -e "inputs/$PROG.$i.in" ] && [ -e "outputs/$PROG.$i.out" ]; then
        make_temp
        timeout "${time_limit[$PROG]}" ./"$PROG" < "inputs/$PROG.$i.in" | head -c 50MB > "$out"
        status="${PIPESTATUS[0]}"
        if [ "$status" -ne "0" ]; then
            echo "$PROG: return non-zero status $status for test case $i"
            g_failed_cases="$g_failed_cases $i"
            num_failed=$((num_failed + 1))
        else 
            diff_count=$(diff -bB "$out" "outputs/$PROG.$i.out" | wc -l)
            if [ "$diff_count" -ne 0 ]; then
                g_failed_cases="$g_failed_cases $i"
                num_failed=$((num_failed + 1))
            fi
            rm -f "$out"
        fi
        i=$((i + 1))
    else
        break
    fi
done

if [ $i -eq 1 ]; then
    echo "$PROG: no test cases found"
elif [ $num_failed -eq 0 ]; then
    echo "$PROG: passed"
else
    summary
    echo "$PROG: incorrect output for $num_failed test case(s):$g_summary"
fi
