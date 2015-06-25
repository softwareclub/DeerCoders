#include<stdio.h>
#define MAX 100
void sort_arr(int a[],int ,int);//function to sort array
void merg_ar(int m[],int a[],int b[],int ,int);//function to merge array
void display(int a[],int ,int );//function to display array
main()
{
	int a1[MAX],a2[MAX],m[200];//initializing the size of first two arrays and also the array that stores the merge array.
	int c,d,i;
	printf("Enter the no. of elements in first array: ");
	scanf("%d",&c);
	printf("Enter the array elements: ");
	for(i=0;i<c;i++)//take elements from user for first array
	{
		scanf("%d",&a1[i]);
	}
	printf("Enter the no. of elements in second array: ");
	scanf("%d",&d);
	printf("Enter the array elements: ");
	for(i=c;i<c+d;i++)//take elements from user for second array
	{
		scanf("%d",&a2[i]);
	}
	merg_ar(m,a1,a2,c,d);//both the arrays are merged using merg_ar function
	sort_arr(m,c,d);//the merged array is sorted
	display(m,c,d);//the array is finally displayed
	return(0);
}

void sort_arr(int a[],int p,int q)
{
	int temp[100];
	int i,j;
	for(i=0;i<p+q;i++)
	{
		for(j=i+1;j<=((p+q)-i-1);j++)
		{
			if(a[i]>a[j])
			{
				temp[i]=a[i];
				a[i]=a[j];
				a[j]=temp[i];
			}
		}
		
	}
}
void merg_ar(int m[],int a[],int b[],int p,int q)
{
	int i;
	
	 for(i=0;i<p+q;i++)
	 {
	 	if(i<p)
	 	{
	 		m[i]=a[i];
	 	}
	 	if(i>=p)
	 	{
	 		m[i]=b[i];
	 	}
	 		
	 	
	 }
		
	
}
void display(int a[],int m,int n)
{
	int i;
	printf("The sorted merged array is ");
	for(i=0;i<(m+n);i++)
	{
		printf("%d\t",a[i]);
	}
}










