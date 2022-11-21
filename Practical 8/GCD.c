#include<stdio.h>

//Greatest Common Divisor

//Here we initialise iterative function
int iterativeGCD(int a,int b){
  int temp;
  //while the remainder is not 0
  while (b!=0){
    //set temporary variable = b
	temp=b;
	//modulo operator
	b=a%b;
	a=temp;
  }
  return a;
}

//Here we initialise recursive function
int recursiveGCD(int a,int b){
  if(b==0) 	//if b is 0 then we return the value a 
  {
      return a;
  }
  else  	//otherwise we call the function again with b and the remainder of a/b as arguments.
  {
      return (recursiveGCD(b,a%b));
  }
}

//main function, this is the start of the program 
int main(){
  //Initialise our two inputs and our "error-catching variable"
  int a,b,err;

  printf("Enter two positive integers : ");
  err = scanf("%d %d",&a,&b);
    
//If we haven't inputed two variables.
  if (err !=2){
	printf("\nEnter two positive integers\n");
	return 1;
  }

  if (a<=0 || b<=0){
	printf("\nThe inputs are not positive");
	return 1;
  }
  //Call functions
  printf("\nIterativeGCD(%d,%d)=%d",a,b,iterativeGCD(a,b));
  printf("\nRecursiveGCD(%d,%d)=%d",a,b,recursiveGCD(a,b));

  printf("\n");
  return 0;
}