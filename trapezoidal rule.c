#include <stdio.h>
#include <math.h>

int main(void){

  //declare variables
  int N=12, i;
  float a=0.0;
  float b, area;

  //set b=pi/3 rads
  b=(M_PI*60.0)/180.0;
  printf("b=%f rads\n", b);

  //first part of sum
  area=tan(a)+tan(b);
  
  //loop
  for(i=5; i<60; i+=5){
    area+=2*tan((M_PI*i/180.0));
  }
  
  //multiply by the prefactor
  area = ((b-a)/(2*N))*area;
  

  printf("Approximate area =%f, Exact area =%f\n", area, log(2.0));


  return 0;
}