/*WAP in C to find the second largest and second smallest number in an array.*/
#include<stdio.h>
void get_sort(int *,int);          //funtion declaration to get and sort the array
void display(int *, int);      //function declaration to display the required numbers
#define MAX 10
int main()
{
	int array[MAX],size;
	printf("Input the muber of elements in an array: \n");
	scanf("%d",&size);
	get_sort(array,size);     //calling this function to get and sort the array elements
	display(array,size);      //calling this function to display the required elements
	return 0;
}
void get_sort(int *array,int size)
{
	int i,j,temp;
	printf("Enter the elements of the array: \n");
	//Accepting the elements of an array and storing them in respective positions
	for(i=0;i<size;i++)
	{
		scanf("%d",(array+i));
	}
	//Sorting the array in ascending order of the magnitude of the array elements
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)
		{
			if(*(array+i)>*(array+j))
			{
				temp=*(array+i);
				*(array+i)=*(array+j);
				*(array+j)=temp;
			}
		}
	}

}
void display(int *array,int size)
{
	int s_largest,s_smallest,i=-1;
    do{ 
    	++i;
    	s_smallest=*(array+i+1);
	}while(*(array+i)==*(array+i+1));       //loop to copy the contents  of next position until the sequential elements are same from begining
	i=size;
	do{
		--i;
    	s_largest=*(array+i-1);
	}while(*(array+i)==*(array+i-1));           //loop to copy the contents  of next position until the sequential elements are same from end
	printf("The second largest number is %d and second smallest number is %d.",s_largest,s_smallest);
}

