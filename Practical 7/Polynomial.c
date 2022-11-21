//import stdio, math, stdlib
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//intialise function which takes integer as an argument 
int fac(int n);

// main function
int main(void){
    
    //i is the loop counter and order gives the order of the polynomial 
    int i, order;
    // e : for the sum   *terms : pointer to array
    double e, *terms;

    // polynomial order
    printf("Enter a Polynomial order:\n");
    if(scanf("%d", &order) != 1){
        printf("Error: invalid order\n");
        return 1;
    }

    // allocate memory
    terms = malloc(order * sizeof(double));

    // populate array
    for(i=0; i<order; i++){
        terms[i]=1.0 / (double)fac(i+1);
        //14 places after the decimal place and print out every term 
        printf("order %d,  %1.14lf\n", order, terms[i]); 	
    }
    
    //initialise e with the first term before we carry out the summation
    e=1.0; 

    // calculate sum
    for(i=0; i<order; i++){

        e += terms[i];

    }
	//takes pointer to remove memory allocation
    free(terms);
	// prints difference in estimated value and exact value
	printf("\ne is estimated as %.10lf. with difference %.10lf. \n", e , e-exp(1.0));

    return 0;
}

//initalise our factorial function
int fac(int n){
    // calculate n!

    if(n<0){
        printf("Error: n<0\n");
        return -1;
    }

    else if(n==0){
        return 1;
    }

    else{
        return n * fac(n-1);
    }
}

//Observation : reason for lack of decrease in higher order polynomials is it can't hold numbers larger than 13! factorial. 