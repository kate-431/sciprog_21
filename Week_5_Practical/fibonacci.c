#include <stdio.h>
#include <stdlib.h>


// Fibinocci function with 2 input pointers
void fibo(int *a, int *b);


int main() {
//Declare variables
   int n;
//Message to user for a value n
   printf("Enter a positive integer for n: \n");
//scanf allows user to input a positive integer of choice
   scanf("%d", &n);
//If the input is less than one- terminate the program
   if (n <1) {
      printf("Number less than 1\n");
      exit(1);
}

//Declare variables
      int n1=0;
      int n2=1;


      printf("The Fibonnacci sequence is: \n");
      printf("%d,  ", n1);

//    
      int i; //loop increments in n-1 and starts at 1
      for (i=1; i<n-1; i++) {
      	 fibo(&n1, &n2); //calling the fibo function
     	  printf("%d, " , n1);

}
//printing the last terms
      fibo(&n1, &n2);
   
      printf("%d\n", n1);

    return 0;

}

// Fibonocci function with 2 input of pointer variables
// *a is set to equal *b
// // *b is  equal to next, and will keep adding the previous 2 numbers to give the next value.
void fibo(int *a,int *b){
      int next;
      next=*a +*b;
      *a = *b;
      *b = next;  
 }
