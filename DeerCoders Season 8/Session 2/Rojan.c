//Program to merge two arrays and sort them

#include <stdio.h>
#define max 1000

main()
{
	int i,j,k;										//integer variable declaration for loops
	int n1,n2,n3,temp;                              //integer variable declaration for array sizes  
	int a[max],b[max],c[max];						//integer array declaration for arrays
	
	
	
	//Inputs the elements of the first array
	printf("Enter the number of elements in first array\n");
	scanf("%d",&n1);
	printf("Input %d integers\n",n1);
	for (i=0;i<n1;i++)
	{
			scanf("%d",&a[i]);
	}
	
	//Inputs the elements of the second array	
	printf("Enter the total number of numbers in second array\n");
	scanf("%d",&n2);
	printf("Input %d Integers\n",n2);
	for (i=0;i<n2;i++)
	{
			scanf("%d",&b[i]);
	}
	
	//prints the first entered array 
	printf("the entered first array is\n");
	for (i=0;i<n1;i++)
	{
		printf("%d\n",a[i]);
	}
	
	//prints the second entered array
	printf("the entered second array is\n");
	for (i=0;i<n1;i++)
	{
		printf("%d\n",b[i]);
	}
	
	
	n3=n1+n2; //sums sizes of first and second array to know the size of third array
		
		
	//Merges the 2 arrays into 1
	for (j=0;j<n1;j++)
	{
		c[j]=a[j];
	}
		
	for (k=0;k<n2;k++)
	{
		c[j+k]=b[k];
	}
		
	//Prints the merged array
	printf("The merged array is without sort is\n");
	for (i=0;i<n3;i++)
	{
		printf("%d\n",c[i]);
	}
	
	//Sorts the merged array
	for(i=0;i<n3;i++)
	{
		for(j=0;j<n3;j++)
		{
			if(c[j]>c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
		
	//prints the sorted array
	printf("The sorted merged array is\n");
	for(i=1;i<=n3;i++)
	{
		printf("%d\n",c[i]);
	}
	
	//The end !
}
