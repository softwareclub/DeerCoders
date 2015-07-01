#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 10
void input(int array[max]);//Function declaration
void printout(int array[max],int size);//function declaration 
main()
{
	int array[max];
	input(array);
}
void input(int array[max])                        //Function to take input the elements of the array
{
	int i , size;
	printf("Enter the size of the elements in the array\n");
	scanf("%d",&size);
	printf("Enter the elements in the array \n");
	for(i=0;i<size;i++)                            //Taking input for a array
	{
		scanf("%d",&array[i]);
	}
printout(array,size);
}
void printout(int array[max], int size)       //Function to sort and print the elements of array
{
		int i , j , temp;
	for(i=0;i<size;i++)                       // sorting algorithm enhanced bubble sort
	{											
		for(j=i+1;j<size;j++)
		{
			if(array[i]>array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			
		}

}
		printf("The second smallest element of the given array is %d\n",array[1]);//Displaying desired output of 2nd largest and 2nd smallest element
		printf("The second largest element of the given array is %d\n",array[size-2]);
		
}
