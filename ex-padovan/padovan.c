/**
 * CS1010 Semester 1 AY24/25
 * Exercise 3: Padovan
 *
 * @file: padovan.c
 */
#include "cs1010.h"

int main(){
    /**
     *
     * A 4D-Padovan sequence is defined as:
     *   p(0) = 1
     *   p(1) = 0
     *   p(2) = 0
     *   p(i) = (p(i-2) + p(i-3)) % 10000   for i > 2
     *   So p(3) = 1, p(4) = 0, p(5) = 1...
     *
     * The reason for the modulo 10000 is to keep the numbers small (we only care 
     * about the last 4 digits), since Padovan grows quickly like Fibonacci.
     *
     * Instruction:
     * Write a program that reads a non-negative integer n from standard input (done for you)
     * and prints 100 consecutive 4D-Padovan numbers:
     *   p(n-1), p(n-2), ..., p(n-100) in this order.
     * Each number should be printed on its own line.
     *
     * n is guaranteed to be at least 100.
     * There is a time limit of 2s per test case. 
     * Hint: To solve within the limit, use a method that avoids recalculating the same numbers repeatedly.
     */

    long n = cs1010_read_long(); // This line reads the input

    return 0; // Replace this line with your code
}
