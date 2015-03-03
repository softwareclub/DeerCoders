#include<stdio.h>
#include<conio.h>
#define MAX 8
int main()
{
	int a[]={0,0,0,0,1,1,1,1};
	int b[]={0,0,1,1,0,0,1,1};
	int c[]={0,1,0,1,0,1,0,1};
	int d[MAX],e[MAX],f[MAX],g[MAX];//d[max]=a+b,e[MAX]=(a+b)*c,f[MAX]={(a+b)*c(xor)A},g[MAX]=complement of f[MAX]
	int i;
	for(i=0;i<MAX;i++)
	{
		if(a[i]==1||b[i]==1)
		{
			d[i]=1;
		}
		else
		{
			d[i]=0;
		}
		if(d[i]==1&&c[i]==1)
		{
			e[i]=1;
		}
		else
		{
			e[i]=0;
		}
		
			if(e[i]==a[i])
		{
			f[i]=0;
		}
		else{
			f[i]=1;
		}
		
		if(f[i]==0)
		{
			g[i]=1;
		}
		else
		{
			g[i]=0;
		}
	}
	printf("a\tb\tc\ta+b\t(a+b)*c\t(a+b)*c xor a\t((a+b)*c xor a)'");
	printf("\n");
	for(i=0;i<MAX;i++)
	{
		printf("\n%d\t%d\t%d\t%d\t%d\t\t%d\t\t%d",a[i],b[i],c[i],d[i],e[i],f[i],g[i]);
		
	}
	printf("\n");
	

}
