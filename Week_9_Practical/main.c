#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
#define  MAX_FILE_NAME 100

//Declare function
int getlines(char filename[MAX_FILE_NAME]);
int main(){

        /*hand the file using pointer f*/
        
        FILE *f;
        char filename[MAX_FILE_NAME];
        printf("Enter file name:");
        scanf("%s", filename); //Scan in file from user
	f = fopen(filename, "r");//Open file

        
        int n = getlines(filename);

        int i;
        //Allocate memory
        int ** magicSquare = malloc(n * sizeof(int*));

        for(i=0; i<n; i++){
                magicSquare[i] = malloc(n*sizeof(int));
        }
        int j;

        
        for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                        fscanf(f, "%d", &magicSquare[i][j]);
                }
        }
       
        printf("The square %s magic.\n", isMagicSquare(magicSquare, n)? "is" : "is NOT");

        //Free memory
        for(i=0; i<n; i++){
                free(magicSquare[i]);
        }
        free(magicSquare);
	
	//close the file
        fclose(f);
        return 0;
}

//Declare function getlines
int getlines(char filename[MAX_FILE_NAME]){
        FILE *fp;
        fp = fopen(filename, "r");
        int ch_read;
        int count = 0;
        /
        while((ch_read = fgetc(fp)) != EOF){
                
                if(ch_read == '\n'){
                        count++;
                }
        }
        //Print the number of lines
        printf("Number if lines:%d\n", count);
        fclose(fp); //Close file
        return count;
}
           
