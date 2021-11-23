#include <stdio.h>

#include <stdlib.h>


//Declaring functions
//Allocating memory
int* allocatearray(int n) {
  int* array;
  array=(int*) malloc(n*sizeof(int));
  printf("Array of size %d allocated. \n", n);
  return array;

} 

// Fill array with 1s
void fillwithones(int* array, int n) {
     int i;
     for(i=0; i<n; i++)
        array[i]=1;
}

//Print elements in array
void printarray(int *array, int n){
     int i;
     for(i=0; i<n; i++){
         printf("%d ", array[i]);
         printf("\n");
}
}

//Deallocating memory
void freearray(int* array) {
     free(array);
     printf("Array freed!\n");

}

//main function
int main(){
//Declare vairables
    int n;
    int* array_main;
//Print for user to input number of elements in array
    printf("Enter the number of elements in the array: ");
//Allow user to input number of elements
     scanf("%d", &n);
     array_main = allocatearray(n);
     fillwithones(array_main, n);
     printarray(array_main, n);
     freearray(array_main);
     array_main = NULL;
     return 0;

}
