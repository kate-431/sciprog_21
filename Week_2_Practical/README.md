WEEK 2 PRACTICAL READ ME


The Week_2_Practical folder contains two seperate programs, Conversion.c and Sum.c.

**INFORMATION ON PROGRAMS

The Conversion.c program converts an input number into a float and binary number.

The Sum.c program is used to find the sum of 1 + 1/2 + 1/3+ ....1/1000 and the sum of 1/1000 _1/999+..1/2+1.

The difference is found between the 2 sums.

**HOW TO COMPILE THE PROGRAMS


To Compile the programs above in a BASH environment, the following command must be used - gcc. Folled by -o which allows us to rename the program for when running it.

**EXAMPLE

To compile program:
gcc -o sum sum.c

To run the compiled program:
./sum


In the Conversion program, as the math library is being used -lm will be needed while compiling program.

**EXAMPLE
gcc -o conversion Conversion.c -lm



