#include<stdio.h>
#include<stdlib.h>
#include "magic_square.h"
#define MAX_FILE_NAME 100

//extract the number of lines from ou magic sqaure file 
int get_num_lines(char filename[MAX_FILE_NAME])		
{
	FILE *fp;
    //open the file
	fp = fopen(filename, "r");			
	int ch_read;
	int count = 0;
    //we loop throug each line in the file and increment "count"
	while ((ch_read = fgetc(fp)) != EOF)		
	{
		if(ch_read == '\n')
		{
			count++;
		}
	}
    //print the number of lines
	printf("Number of lines id: %d\n", count);	
	fclose(fp);
	return count;
}



int main(void)
{					
	FILE *f;		
	char filename[MAX_FILE_NAME];
	printf("Enter file name");
	scanf("%s", filename);

							//Retrieve the total number of lines  
	
	int n = get_num_lines(filename);
	//open file
	f = fopen(filename, "r");			


	int i;
    //initialize dynamic array
	int **magicsquare = malloc(n*sizeof(int*)); 	


	for(i = 0; i < n; i ++)
	{
		magicsquare[i] = malloc(n*sizeof(int));
	}



	int j;
	for(i = 0; i < n; i ++)
        {
		for(j = 0; j < n; j ++)
		{
            //populate the array 
			fscanf(f, "%d", &magicsquare[i][j]); 
		}
	}
	int flag = isMagicSquare(magicsquare, n);
	if(flag == 1)
	{
		printf("This square is magic\n");
		
	}
	else
	{
		printf("This square is not magic \n");
	}
	for(i = 0; i < n; i++)
	{
        //free the array for better memory management 
		free(magicsquare[i]);			
	}
	free(magicsquare);
    //closew the file
	fclose(f);					
	return 0;
}