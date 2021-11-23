/*
 * Iterative and Recursive version of Euclid's Algorithm
 * to calculate the gcd of two positive integers
 *
 */
#include <stdio.h>

// Declare Functions
int iterativeGCD(int a, int b);

int recursiveGCD(int a, int b);

int main(void) {
   int a, b, error;
   //Send message to user to input two integers
   printf("Please input two positive integers\n");
   error = scanf("%d %d",&a,&b); // allows user to input 2 integers
   if (error != 2) {
     printf("Please try again\n");
     return 1;
   }
   // if a or b is less than zero then print message to user
   if (a<=0 || b<=0) {
     printf("These numbers are not positive!\n");
     return 1;
   }

  // Run Functions and print values
  printf("Iterative gcd(%d, %d)=%d\n", a, b, iterativeGCD(a,b));
  printf("Recursive gcd(%d, %d)=%d\n", a, b, recursiveGCD(a,b));
  return 0;
}

// Declare Function
int iterativeGCD(int a, int b){
  int temp;
  // iterating through loop 
  while(b != 0){
    temp=b;
    b=a%b; //Check for remainder
    a=temp;
  }
  return a;
}

int recursiveGCD(int a, int b){
  // If b is 0, return a else return recursiveGCD function result
  if (b==0){
    return a;
  }
  else{
    return(recursiveGCD(b,a%b));
  }
}
