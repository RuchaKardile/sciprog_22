#include <stdio.h>
#include<stdlib.h>

// prototype of function fib
void fib(int *pa, int *pb);

int main(void){

  // declare variables for user input, 2 consecutive Fibonacci numbers
  int n, i;
  int a = 0, b = 1;

  // get the user to input a value for n
  printf("Enter an integer greater or equal to zero: \n");
  scanf("%d", &n);
  
   // check if n>0
    if (n<1) {
        printf("invalid: n<0\n");
        exit(1);
    }
    // calculate and print
    printf("fibonacci seq:\n");
    printf("%d\n%d\n", a, b);

    for(i=2; i<n; i++){
        fib(&b, &a);
        printf("%d\n", b);
    }

    return 0;
}

// fib takes two memory addresses and changes the corresponding r-values; returns nothing
void fib(int *pa, int *pb){
    
    int tmp;
  
  // *pa is the l-value for some variable a (similarly for *pb and b)
  // a <-> F_{n-2}; b <-> F_{n-1}
  
  // store *pa and *pb in variable tmp
    tmp = *pa + *pb;
  
  // *a=f(n), *b=f(n-1)
  // reassign
    *pb = *pa;
    *pa = tmp;
}
