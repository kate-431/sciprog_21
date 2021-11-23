#include<stdio.h>
#include<math.h>

//Main function
int main(void){

  int n=5, p=3,q=4;
  double A[n][p], B[p][q],C[n][q];    //static allocation - size of matrix fixed
  int i, j ,k; //need 3 loops 
// Create Matrix A 
 for(i=0; i<n; i++){      //i row index
   for(j=0; j<p; j++){     //j column index
     A[i][j]=i+j;
  }
}
//Create Matrix B
  for(i=0; i<p; i++){
     for(j=0; j<q; j++){
      B[i][j]=i-j;
    
  }
}
//Create Matrix C
  for(i=0; i<n; i++){      
   for(j=0; j<q; j++){     
     C[i][j]=0.0;
  }
}

 //Matrix multiplication  
 matmulti(n, p, q, A, B, C);
//for (i=0; i<n; i++){
  //  for(j=0; j<q; j++){
    //  for(k=0; k<p; k++){
      // C[i][j]= C[i][j]+A[i][k]*B[k][j];



//Initialize A,B and C matrices
 
 //Print out the matrices
   printf("\nThe is matrix A:\n\n");
           for(i=0; i<n; i++){      //i row index
              for(j=0; j<p; j++){     //j column index
                  printf("%3.0f", A[i][j]);
  }
 
   printf("\n"); // one line break after each row  
}
   printf("\nThe is matrix B:\n\n");
           for(i=0; i<p; i++){      //i row index
              for(j=0; j<q; j++){     //j column index
                  printf("%3.0f", B[i][j]);
  }

   printf("\n"); // one line break after each row  
}
   printf("\nThe is matrix C:\n\n");
           for(i=0; i<n; i++){      //i row index
              for(j=0; j<q; j++){     //j column index
                  printf("%3.0f", C[i][j]);
  }

   printf("\n"); // one line break after each row  
}
return 0;
} 
              
