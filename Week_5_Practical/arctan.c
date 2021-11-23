#include <stdio.h>
#include <math.h>


//Declaring 2 functions - arctanh1 and arctanh2
double arctanh1(const double x, const double delta);


double arctanh2(const double x);

//main function
int main(){
//Declaring variables 	 
   double prec; 
//Print message for user
   printf("Enter precision for the Maclaurin series:\n");
//Scan allows user to input a velue  
   scanf("%lf", &prec);

   double begin,end;
   printf("Enter the start and finish points for x:\n");
   scanf("%lf, %lf", &begin, &end);
//Caculate array size to store values
   double a = ((fabs(begin) + fabs(end))/prec) +1.; //Create an array
   int asize =a; //store as int
   double tan1[asize];
   double tan2[asize];
//Declaring integers for loop
   double i;
   int j =0;
//For loop
   for (i=begin; i<=end; i+=prec){  //i increase by 0.01
//Values stored in arrays  
      tan1[j] = arctanh1(i, prec);
      tan2[j] = arctanh2(i);
//Printing the difference between tan1 and tan2
      printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n",i, i, fabs(tan1[j] - tan2[j]));
//Incrementing to j
    j++;
}
 
 return 0;
}

//Defining the arctahn1 function
//The loop will provide an approximation of MacLauren Series
double arctanh1(const double x,const double delta){
	double arcTan = 0;
	double elem;
	int n =0;
	do {

      		double val = 2*n + 1;
		elem = pow(x, val)/val;
		arcTan += elem;
		n++; //increments up


//Function will terminate when series is smaller than delta
		} while(fabs(elem)>= delta);

		return arcTan;
}

//Defining arctanh2 function which will use natural log to approximate 
double arctanh2(const double x) {

return(log(1 + x) - log(1-x))/2;
}

