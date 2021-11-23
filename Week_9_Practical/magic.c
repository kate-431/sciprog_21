#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"


// declaring  function
int getlines(char filename[MAX_FILE_NAME]);
// hand file using the pointer *
int main() {
  FILE *f;
  char filename[MAX_FILE_NAME]; 
  printf("Enter file name: ");  
  scanf("%s", filename); //Scan file name   
 
  f = fopen(filename, "r"); // Open the file
  
  int n = getlines(filename); //Setting integer n as getlines function

  
  int i;
  int ** magicSquare = malloc(n * sizeof(int*)); //Allocate memory needed

  for(i = 0; i < n; i++) {
    magicSquare[i] = malloc(n * sizeof(int));
  }
  
  int j;
//scanning the file input
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      fscanf(f, "%d", &magicSquare[i][j]);
    }
    
  }
 //Checking if matrix is square 
  printf("The square %s magic.\n", isMagicSquare(magicSquare, n) ? "is" : "is NOT");

  for(i = 0; i < n; i++) {
    free(magicSquare[i]);
  }
  // freeing up the allocation 
  free(magicSquare);
  
  fclose(f); //Close the file 
  
  return 0;
}


// defining function getlines which returns count of lines in file
int getlines(char filename[MAX_FILE_NAME]) {
  // declaring pointers and the file
  FILE *fp;
  fp = fopen(filename, "r");
  int ch_read;
  int count = 0;
  while( (ch_read = fgetc(fp)) != EOF)
  {
   
    if (ch_read == '\n') {
      count++;
    }
  }
  //Print the number of lines
  printf("No. of lines %d\n", count);
  fclose(fp);
  return count;  
}
