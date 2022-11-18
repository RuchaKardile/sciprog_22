#include <stdio.h>
#include <math.h>

int main(void) 
{
	/*Declaration of Variables*/
	int i = 0; 	
	float a = 0, b = 1.047197551, Num_points = 13.0, N = Num_points - 1;   
	float  y = 0, division = 0, area = 0, point = 0 , second_point = 0;	

    //intializing area calculating function
	int area_under_func() 
	{			
	    //calculating the size of the spaces between points
		division = (b-a)/(Num_points - 1);
		//tan(a) and tan(b) form the first contribution to the total area 
		area = tan(a) - tan(b);						
		for (i = 0; i <= Num_points -2; ++i)
		{				
			second_point = a + division;			
			point = (second_point+(division*i));			
			area = area + (2*tan(point));				 
			
		}
		//multipling by the constant
		area = area * ((b-a)/(2*N));					
		printf("Expected Area   =  %5f\n",area);				 
		
		
	
	}
	//call the above function
	area_under_func();      
	printf("Approximate Area =  %3f\n",log(2.0));
	return 0;
}