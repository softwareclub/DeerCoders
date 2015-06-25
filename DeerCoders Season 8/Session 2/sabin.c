/*WAP to merge two arrays into third array: Array are assumed to be sorted in ascending order. You entered two sorted arrays and combine them to get a large array*/
#include<stdio.h>       
#include<conio.h>
#define MAX 10    //defining symbolic constant MAX to declare the array size that makes the program more flexible even if the array size increases
int main()
{
	int arr1[MAX],arr2[MAX];    //declaring two integer arrays
	int temp,m,n,i;
	int j=0;                    //initializing the integer variable j with 0
	printf("Input number of elements in first array: \n");   
	scanf("%d",&m);                    
	printf("Enter elements in first array with respective positions: \n");
	printf("Positions\tValue\n");
	for(i=0;i<m;i++)                //taking m number of elements in first array
	{
		printf("%d\t\t",i);
		scanf("%d",&arr1[i]);
	}
	printf("Input number of elements in second array: \n");
	scanf("%d",&n);
	printf("Enter elements in second array with respective positions: \n");
	printf("Positions\tValue\n"); 
	for(i=0;i<n;i++)                 //taking n number of elements in second array
	{
		printf("%d\t\t",i);
		scanf("%d",&arr2[i]);
	}
	//Merging two arrays into single array. (Adding the elements of second array into first array so that it will take less memory space than while storing both the arrays' elemeents into new array)
	for(i=m;i<m+n;i++)
	{
		arr1[i]=arr2[j];
		j++;
	}
	//Sorting the elements of merged array into ascending order
	for(i=0;i<m+n;i++)
	{
		for(j=0;j<m+n-1;j++)
		{
			if(arr1[j]>arr1[j+1])  //Swaping the variables position for sorting elements in ascending order
			{
				temp=arr1[j];       
				arr1[j]=arr1[j+1];
				arr1[j+1]=temp;
			}
		}
	 }
	 //Displaying the  sorted elements of merged array
	 printf("Elements of merged and sorted array with their positions are \n");
	 printf("Position\tvalue\n");
	 for(i=0;i<m+n;i++)
	 {
	 	printf("%d\t\t",i);
	 	printf("%d\n",arr1[i]);
	 }
	 getch();            //Including this function makes the program not to terminate unless the user pressed any key
	 return 0;           //Returning 0 value to operating system to indicate that program has runned successfully
}
