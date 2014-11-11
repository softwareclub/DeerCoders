#include<stdio.h>
#include<conio.h>
int main()
{
	int a , b , i,j ;
	int c[88];
	for(i=10;i<=99;i++)
	{
		c[i]=i;
	}
	//for(i=10;i<=99;i++)
	//{
	//	printf("%d\n",c[i]);
	//}
	for(i=10;i<=99;i++)
	{
		if(c[i]%7==0)
		{
			//printf("%d/t",c[i]);
			a=c[i]/10;
			b=c[i]%10;
			if(a-b==4)
			{
				printf("%d",c[i]);
			}
		}
		else
		{
			printf(" ");
		}
	}
	
	
	
}
