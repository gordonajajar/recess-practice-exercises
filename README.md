# Recess Practice Exercises

## Overview
- This repository contains 5 exercises taken from previous year's exercises for practice.
- Exercises each have their own `ex-...` folder within this repository. 

## Downloading this Assignment Volume

Please follow the instructions from Tutorial 0 to:
- Set up WebTop if you haven't.
- Learn how to download this repository to your WebTop via `git clone`. 

- There is no submitting of this repository as it is for practice only.

## List of exercises in this Volume
Ordered from easiest to hardest (subjective):

1. `ex-unit`: [go to exercise folder](./ex-unit) | [go to instructions (external link)](https://nus-cs1010.github.io/2425-s1/exercises/ex03.html#question-3-unit)
2. `ex-largest`: [go to exercise folder](./ex-largest) | [go to instructions (external link)](https://nus-cs1010.github.io/2425-s1/exercises/ex03.html#question-4-largest)
3. `ex-max`: [go to exercise folder](./ex-max) | [go to instructions (external link)](https://nus-cs1010.github.io/2425-s1/exercises/ex03.html#question-7-max)
4. `ex-padovan`: [go to exercise folder](./ex-padovan) | [go to instructions (external link)](https://nus-cs1010.github.io/2425-s1/exercises/ex03.html#question-8-padovan)
5. `ex-sierpinski`: [go to exercise folder](./ex-sierpinski) | [go to instructions PDF](./ex-sierpinski/INSTRUCTIONS.pdf)

Questions 1-4 are from Exercise 3 of CS1010 AY24/25 Sem 1, while Question 5 is the final question from AY24/25 Sem 1 PE0.
Instructions for questions 1-4 are hosted on the CS1010 website, while instructions for question 5 are in the `INSTRUCTIONS.pdf` file within the `ex-sierpinski` folder.

Questions 1-4 are on fixed-length array manipulation, while question 5 is on recursion.

For all the questions, you do not need to edit the `main` function.

### Compiling an exercise
- Simply running `make` within each exercise folder will automatically:
    - Compile your code
    - Run `tidy` to format your code in a standard way
    - Run `test` to test your code on a limited set of test cases (provided in the `inputs` and respective `outputs` folders)

### Manually running an exercise
- To manually run an exercise (using `sierpinski` as an example):
    - Find the name of the executable created by `make`; e.g `sierpinski`
    - Run `./sierpinski` to run the program
    - Provide custom input into the program as needed

    - You can also do `./sierpinski < inputs/sierpinski.1.in` to run the program with input from a provided file, and diff the output with the expected output using `diff`:
        - `./sierpinski < inputs/sierpinski.1.in | diff - outputs/sierpinski.1.out`
        - If there is no output from `diff`, your program's output matches the expected output!
        - Consder using `vimdiff`, `diff -u` or `diff -y` for a more user-friendly diff output.

	- You can open the `Makefile` and check what comes after the line `TARGET = ` to find the name of the executable. 

