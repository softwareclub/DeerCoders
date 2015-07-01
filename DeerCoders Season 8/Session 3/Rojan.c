#include <stdio.h>
#define max 100

main()
{

int array[max],arraynum,i,j,temp;                  //Variable declaration

printf("Enter the number of elements for the array:\t");
scanf("%d",&arraynum);                              //Inputs the number of elements in the array

for (i=0;i<arraynum;i++)
{
	printf("Enter element number %d:\t",i+1);
	scanf("%d",&array[i]);                         //Inputs the array element
}

for (i=0;i<arraynum;i++)							//Bubble sort
{
	for(j=0;j<arraynum;j++)
	{
		if (array[j]>array[j+1])
		{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}
}


for (i=0;i<arraynum;i++)
printf("%d\n",array[i]);

printf("The second smallest number is %d\n",array[1]);			//prints the result
printf("The second largest number is %d\n",array[arraynum-2]);

}
