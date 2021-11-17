/*Load library*/
#include <stdio.h>



int main(void) {
/* Declare integer and float  variables */
   int i;
   float sum1, sum2, diff;


/* First sum */
   sum1 = 0.0;
/*Loop 1000 times in increments of 1.*/
   for (i=1; i<=1000; i++) /* i increasing*/ {
       sum1 += 1.0/i;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) /* i decreasing */ {
      sum2 = sum2 + 1.0/i;
   }
   /*Print the result of sum1 and sum2*/  
   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);
/*Calculate the difference between sum2 and sum1.*/
   diff = sum2 - sum1;
/*Print the differnce*/
   printf("Difference between the two is %f\n",diff);


return 0;
}
