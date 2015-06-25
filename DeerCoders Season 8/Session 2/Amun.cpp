//C program to merge element of two array and sort them in ascending order
#include<stdio.h>
#define Max 100 // define max size of the array to 100, can change the size of the array dynamically
main()
{
	int A[Max], B[Max],temp;//Two arrays inorder to insert the value and another array to take the value of merged array
	int i, m,n,k;
	int j=0;//J is incremented in line 26 inorder to merge the two arrays
	printf("Enter the no of elements of the first array:\n");
	scanf("%d",&m);
	printf("Enter the element of the 1st array\n");//Value of first array is taken
	for(i=0; i<m; i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the no of elements of the second array \n");
	scanf("%d",&n);
	printf("Enter the element of the 2nd array\n");//Value of second array is taken
	for(i=0; i<n; i++)
	{
		scanf("%d",&B[i]);
	}
	printf("The merged element of the given two array is:\n");//Here from the end of the first array the value of beginning of 2nd array is inserted until the total array is inserted and merged in array A
	for(i=m;i<m+n;i++)
	{
		A[i]= B[j];
		j++;// j is zero in line 8 and is continued till all the values are placed in Array A
	}
	for(i=0;i<m+n;i++)
	{
		printf("%d\n",A[i]);
	}
	for(i=0;i<m+n;i++)
	{
		for(k=0;k<m+n-1;k++)//Merged array is sorted in ascending order 
		{
			if(A[k]>A[k+1])
			{
				temp=A[k];
				A[k]=A[k+1];
				A[k+1]=temp;
			}
		}
	}
	printf("The merged element of the array in ascending order is \n");
	for(i=0;i<m+n;i++)
	{
		printf("%d\n",A[i]);//The merged element is printed in ascending order
	}
	
}
