#include<stdio.h>
#define MAX 100
int size;
void array_operation(int []);     //decleration of function 
main()
{
	int array[MAX],i,j,smallest,largest;
	array_operation(array);       //the function gets and sorts the array
	printf("\nThe second largest number is %d and second smallest number is %d",array[size-2],array[1]);
}
void array_operation(int a[])     //defination of function
{
	int i,j,temp;
	printf("enter the number of elements in the array... ");
	scanf("%d",&size);
	for(i=0;i<size;i++)           //here the elements are placed in array.
	{
		printf("Element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;i++)         //here the array is sorted using bubblesort algorithm
	{
		for(j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])       //if a number is grater then the number after it only then swaping takes place 
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
