#include<stdio.h>
#include<string.h>
int main()
{
int a[5],b[10],c[10],temp;
	int i,j;
	printf("enter elements of A ");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("enter elements of B");
	for (i=5;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i<5)
		{
			
			c[j]=a[i];
		}
		if(i>=5&&i<10)
		{
		c[j]=b[i];	
		}
			
	
	}
	for(j=0;j<10;j++)
	{
			printf("%d",c[j]);
	}
	for(j=0;j<10;j++)
	{
	if(c[j]>c[j+1])
	{
		c[j]=c[j+1];
		temp=c[j];
	}
	}
	printf("%d",c[j]);
}
	
