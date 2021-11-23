#include <stdio.h>

int main(void){

// Declaring integer and double variabes
   int i;
   double a;
   printf("Enter on int and a double, separately by (,)\n");
//scan function used to take input from user
   scanf("%d, %lf", &i, &a);
   printf("You have entered %d and %lf\n", i,a);

//Declaring the pointer variable
    int *pointer_to_i =&i;  
    printf("The value i is %d\n",i);
    printf("The value i is also %d\n", *pointer_to_i);
    printf("The address of i is %d\n", &i);

    return 0;
// program will return integer and long float of chosen numbers.
}
