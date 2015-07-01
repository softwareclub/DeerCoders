#include<stdio.h>
#include<stdlib.h>
#define MAX 100
main()
{
	int num[MAX]; //num[] is an array to store the integers
	int i,j;
	int n, temp;  //n is the number of elements in array and temp is a temporary variable to store a variable while sorting
	printf("Enter the total number of elements:\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j]) //sorting in ascending order
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("The second smallest element is %d\n The second largest element is %d\n",num[1],num[n-2]); 
}
