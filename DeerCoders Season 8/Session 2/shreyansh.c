/*c program to merge two arrays in sorted order*/
#include<stdio.h>
#define MAX 1000
void sort(int [],int );
void merge(int [],int [],int [], int, int);
void getarray(int [], int);
main()
{
	int array1[MAX], array2[MAX],comb[MAX],siz1,siz2,i;//Decleration of variables
	printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY 1: "); 
	scanf("%d",&siz1);                                 // Gets size of array 1                               
	printf("\nFOR ARRAY 1 ENTER THE ELEMENTS\n");
	getarray(array1,siz1);                             //Gets the elements of array 1 using getarray function
    printf("\nENTER THE NUMBER OF ELEMENTS IN ARRAY 2: ");
	scanf("%d",&siz2);  	                           // Gets size of array 2 
	printf("\nFOR ARRAY 2 ENTER THE ELEMENTS\n");      
	getarray(array2,siz2);                             //Gets the elements of array 2 using getarray function
	sort(array1,siz1);                                 //Sorts array 1 to ensure it is sorted, the sort function is used
	sort(array2,siz2);                                 //Sorts array 2 to ensure it is sorted, the sort function is used
	merge(array1,array2,comb,siz1,siz2);
	printf("\nTHE SORTED ARRAY IS\n");
	for(i=0;i<(siz1+siz2);i++)                         //Here, the combined array is printed 
	{
		printf("Element %2d: %2d\n",i+1,comb[i]);
	}
}
void getarray(int a[], int n)//This function gets the elements in the array
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&a[i]);
	}
}
void sort(int a[],int n)//This function sorts the elements in the array using bubblesort algorithm 
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void merge(int a1[],int a2[], int com[],int siz1, int siz2)//This functions merges the two sorted arrays
{
	int i,j,k;
	i=j=k=0;
	while(i<siz1 && j<siz2)
	{
		if(a1[i]<a2[j])//Here the value is assigned to the combined array if element of first array is smaller
		{
			com[k]=a1[i];
			i++;
		}
		else//Here the value is assigned to the combined array if element of second array is smaller
		{
			com[k]=a2[j];
			j++;
		}
		k++;
	}
	while(i<siz1)//If the second array has more number of smaller elements only then this condition is envoked where all remaing items in the first array are assigned to the last part of combined array
	{
		com[k]=a1[i];
		i++;
		k++;
	}
	while(j<siz2)//If the first array has more number of smaller elements only then this condition is envoked where all remaing items in the second array are assigned to the last part of combined array
	{
		com[k]=a2[j];
		j++;
		k++;
	}
}


