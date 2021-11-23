#include<stdio.h>
#include<math.h>
#include<stdlib.h>


// Declaring function factorial
int factorial(int n){
// Declaring variables
   int i;
   int fact =1;
// if factorial =0 return 1   
   if (n==0)
   return 1;

//computing the factorial
   for (i=1; i<=n; i++)
       fact = fact*i;
   return fact;


}


//Declaring the compute_ polynomial function
double compute_polynomial(int n, int x) { 
       double sum = 0.0;
       int i;
     
     // Using factorial function implement the polynomial equation
     for(i=0; i<=n; i++)
        sum = sum + (double)pow(x,i)/factorial(i);

         return sum;

}


//main function

int main(){
  int order_of_polynomial;
  int size_of_array;
  double* array_of_terms;
  int i, x=1;
//Asks user to input order of polynomial
  printf("Enter the order of polynomial: ");
//Allows user to input order
  scanf("%d", &order_of_polynomial); 
//Calculating the size of the array required
  size_of_array = order_of_polynomial + 1;
//Allocate memory
  array_of_terms =(double *) malloc(size_of_array * sizeof(double));
  //For loop to execuate calculations
  for(i=0; i < size_of_array; i++){
  array_of_terms[i] = compute_polynomial(i,x);
  printf("f[%d] = %0.20f\n", i, array_of_terms[i]);
}
//Printing true value of e
  printf("e1=%0.20f\n", exp(1));

//Comparision between estimate and true value
  for(i=0; i<size_of_array; i++)
  printf("Estimate difference for term %d is %0.20f\n",i, exp(1) -array_of_terms[i]);
// Freeing up space
   free(array_of_terms);
   array_of_terms = NULL;
   

  return 0;
}

