#include<stdio.h>
void sort_display(int a[],int n);//function declaration to sort and print the required fields
main()
{
	int array[100],i,j,size;//declaration of variables and array
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter the numbers in array: ");
	for(i=0;i<size;i++)//taking values from user in arrray
	{
		scanf("%d",&array[i]);
	}
	sort_display(array,size);

}
void sort_display(int a[],int n)//this is a  function to sort the array given by the user and display the second largest and smallest
{
	int i,j,temp;
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}	
	printf("The second largest number in array is %d\n",a[n-2]);//output display
	printf("The second smallest number in array is %d",a[1]);//output display
	
}
	

