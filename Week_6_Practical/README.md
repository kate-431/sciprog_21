**READ ME**

The programs in Week_7_Practical include;
1. main.c
2. mm.c
3. matmul.c


**INFORMATION ON PROGRAMS**

The main.c is a program that performs matrix multiplication on matrices, matrix A a 5X3 by B a 3X4 matrix to find Matrix C.

Programs mm.c and matmul.c are the main.c broken down into two seperate programs.

**HOW TO COMPILE THE PROGRAMS**


To Compile the programs above in a BASH environment, the following command must be used; gcc. Folled by -o which allows us to rename the program for when running it.

**EXAMPLE**

To compile program:
gcc -o main main.c -lm

To run the compiled program:
./main

**Example for Makefile**

To compile the mm.c and main.c files, enter make in the command line to execuate the Makefile.
This compiles the programs to create two object files.
Once compiled, run the command ./mmc to run the code.






