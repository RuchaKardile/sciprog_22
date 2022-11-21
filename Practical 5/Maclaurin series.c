#include<stdio.h>
#include<math.h>

//we initialise our function for the Maclaurin series. 
double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main(void){
	//intialise variables as doubles
    double delta;
    double x;
    
    // prompt user for delta value
    printf("Enter the delta for Maclaurin series\n");
    scanf("%lf", &delta);
   
   //the lenght of our list is large to ensure we have enough memory allocated for all the ellements of the list. 
    int length=1000;
    
    // arrays
    double tan1[length]; //store the results of arctanh1 for each x
    double tan2[length]; //store the results of arctanh2 for each x

    int j=0; //array index

    x = -0.9; // lower x bound

    // calculate atan for each x and print diff
    while(x<=0.9 && j<length){
        //here we append our list with the values from arctanh1
        tan1[j]=arctanh1(x,delta);
        tan2[j]=arctanh2(x);

        printf("difference at x=%lf is %.10lf\n", x, fabs(tan1[j]-tan2[j]));
        //increment 
        j++;
        x += 0.1;
    }


    return 0;
}

//This is our first function which contains the method for the Maclaurin series 
double arctanh1(const double x, const double delta)								
{
 	// approximated result
	double arcTan =0;
	double elem, val;
	int n = 0; 												
	do {
		val = 2*n+1;
		elem = pow(x,val)/val;
		arcTan +=elem;
		n++;
    //we run the above code until the absolute value of elem is >= to delta	
	} while(fabs(elem) >= delta); 	
	
	//we return our arcTan double percision variable 
	return arcTan;											
	
}






double arctanh2(const double x)
{
	return((log(1.0+x)-log(1.0-x))/2.0);									//Here we use the formula as an alternative to the Maclauirn series.
														//OBSERVATIONS: it was noted that decreaseing the value of delta decreased the difference between the two methods. 
}														//This is due to the improvemnent of the accuracy o the Maclaurin series. 
