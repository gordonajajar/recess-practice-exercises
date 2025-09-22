/**
 * CS1010 Semester 1 AY24/25
 * Exercise 3: Unit
 *
 * @file: unit.c
 */
#include "cs1010.h"
#include <math.h>

void find_unit_vector(const long v[3], double unit[3])
{

    /**
        TODO:
        A unit vector is a vector with a length of 1. Write a program that, 
        given a 3-dimensional vector, finds the unit vector in the same direction.

        The unit vector u of a vector v is given by the formula:
        u = v / ||v||
        where ||v|| is the magnitude (length) of vector v, calculated as:
        ||v|| = sqrt(v[0]^2 + v[1]^2 + v[2]^2)

        Complete this function to compute the unit vector.
     **/

}

int main(void)
{
    long *vector = cs1010_read_long_array(3);
    double unit[3] = {0};
    find_unit_vector(vector, unit);

    free(vector);

    for (long i = 0; i < 3; i += 1) {
        cs1010_println_double(unit[i]);
    }
}
