#include<stdio.h>
#define MAX 100

 int main()

{
	int first[MAX], second[MAX], final[MAX], firstarraysize, secondarraysize, finalarraysize, i, j , temp; // declaring arrays
		j=0, temp=0;  
	printf("enter number of elements in first array:\n");
	scanf("%d",&firstarraysize);
	printf("enter elements of first array");
	for(i=0; i<firstarraysize; i++)
		{
			scanf("%d",&first[i]);
		}
	
	printf("enter number of elements in second array:\n");
	scanf("%d",&secondarraysize);
	printf("enter elements of second array");
	for(i=0; i<secondarraysize; i++)
		{
			scanf("%d",&second[i]);
			
		}                           // correct till here
		
	finalarraysize = firstarraysize + secondarraysize;
	
		if(finalarraysize >= MAX)
		{
			printf(" array space is full to combine two arrays");
			
		}
		else
		{
		    // combining two arrays (also correct)
			for (i=firstarraysize; i<finalarraysize; i++)
			first[i] = second[j++];
			
		}
			printf("combined array = ");
		for(i=0; i<finalarraysize; i++)
		{
			printf("%d \t",first[i]);
	    }
		
		for(i=0; i<finalarraysize; i++ )
		{
		 if(first[i] > first [i+1] ) // sorting (is also correct)
		 	{
		 		temp = first[i];
		 		first[i] = first[i+1];
		 		first[i+1] = temp;
		 	}	
		
		}
		printf(" \n combied and sorted array = ");
		for(i=0; i<finalarraysize; i++)
		{
			printf(" %d \t",first[i]);
	    } // why are all my second array elements repeating??
} 
