WEEK 3 README

Week practical 3 codes include:
1. printing
2. Trapezol rule
WEEK 3 PRACTICAL READ ME


The Week_3_practical folder contains two seperate programs, print.c and Trapezodial.c.

**INFORMATION ON PROGRAMS

The print.c program is used to demonstrate how to use the printf function in C.

The Trapezodial.c program is used to compute the area under a curve.


**HOW TO COMPILE THE PROGRAMS


To Compile the programs above in a BASH environment, the following command must be used - gcc. Folled by -o which allows us to rename the program for when running it.

**EXAMPLE

To compile program:
gcc -o print print.c

To run the compiled program:
./print


In the Trapezodial.c program, as the math library is being used -lm will be needed while compiling program.

**EXAMPLE
gcc -o trap Trapezodial.c -lm
