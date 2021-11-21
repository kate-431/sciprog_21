#include<stdio.h>
#include<math.h>


float deg_to_rad(float x);
int main(){
    int N=12, i;
    float TanArr[N+1], deg, rad;
  // Calculate the values of f(xi) where i=0, 1...12
  //   // as array elements 
  //     // xi are radians
       for(i=0; i<=N; i++){
        deg=i*5.0;
        rad=deg_to_rad(deg);
        TanArr[i]=tan(rad);
        printf("TanArr[%d]=%f  (f(x) at x=%d)\n",  i, TanArr[i],i); //[] will print i's in in order
    }
// Find area under the curve using Trapezodial rule
 float area;
 area = TanArr[0]+TanArr[N];
 for(i=1; i<N; i++){
  area=area+2.0*TanArr[i];
}

//Multiply area by (pi/3)/2N
//Must be in radians 
  float mult_rad=deg_to_rad((60.0-0.0)/(2.0*N));
  area=mult_rad*area;

//Approximated result
  printf("\nTrapezodial result:%f\n", area);
//Actual result (ln(2))
  printf("Real result: %f\n",log(2.0));
   return 0;

}
float deg_to_rad(float x){

    return((M_PI * x)/180.0);
} 

