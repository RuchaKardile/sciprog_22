#include<stdio.h>

int main(void)
{	
    //array dimensions
	int n=5, a=3, b=4;	
	//static array --> cannot change size 
	double A[n][a], B[a][b], C[n][b]; 		
	//counters
	int i, j, k;				
	
	//A --> we ensure the counters do not extend beyond the bounds of the static array 
	for(i=0; i<n; i++)			
	{
		for(j=0; j<a; j++)
		{
		    //the sum of the indexes
			A[i][j] = i+j;
		}		


	}

	//B --> i<p and j<q for the same reason as above, we are dealing with static array		
	for(i=0; i<a; i++)				 
        {
                for(j=0; j<b; j++)      
                {
                    //the difference between the indexes
                        B[i][j] = i-j;			 
                }


        }

	//C
	for(i=0; i<n; i++)			
        {
                for(j=0; j<b; j++)      
                {
                        C[i][j] =0.0;			
                }


        }
	


	//Matrix Multiplication
	//Here we must iterate all entrys in A and B
	for(i=0; i <n; i++)				 
	{
		for(j=0; j<b; j++)
		{
			for(k = 0; k<a; k++)
			{
			//Here we update C with the A_ij times B_ij
			C[i][j] = C[i][j]+A[i][k]*B[k][j];	 
			}
		}
	}


	//print
	printf("\nThis is Matrix A: \n");		
	for(i=0; i<n; i++)			
	{						
		for(j=0; j<a; j++)		
		{
			printf("%3.0f ",A[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\nThis is Matrix B: \n");
        for(i=0; i<a; i++)
        {
                for(j=0; j<b; j++)
                {
                        printf("%3.0f ",B[i][j]);
                }
                printf("\n");
        }

	printf("\nThis is Matrix C: \n");
        for(i=0; i<n; i++)
        {
                for(j=0; j<b; j++)
                {
                        printf("%3.0f ",C[i][j]);
                }
                printf("\n");
        }
return 0;
}