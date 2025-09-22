/**
 * CS1010 Semester 1 AY24/25
 * Exercise 3: Padovan
 *
 * @file: padovan.c
 */
#include "cs1010.h"

int main(void){
    /**
     * A 4D-Padovan sequence is defined as:
     *   p(0) = 1
     *   p(1) = 0
     *   p(2) = 0
     *   p(i) = (p(i-2) + p(i-3)) % 10000   for i > 2
     *   So p(3) = 1, p(4) = 0, p(5) = 1...

     * The reason for the modulo 10000 is to keep the numbers small (we only care 
     * about the last 4 digits), since Padovan grows quickly like Fibonacci and will eventually overflow long.

     * n is guaranteed to be at least 100.
     * There is a time limit of 2s per test case. 

     * Some things to consider:
     *   1. To solve within the time limit, use a method that avoids recalculating the same numbers repeatedly.
     *   2. Maybe think along the lines of shifting a window of numbers along the sequence.
     */

    long n = cs1010_read_long(); // This line reads the input; don't change it

    return 0; // Replace this line with your code
}
