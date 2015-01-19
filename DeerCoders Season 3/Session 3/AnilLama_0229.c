#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i=0,x,y,k,z;
	char a[1000],b,temp[100];
	char result[1000], string[100];
	puts("Enter any string:");
	gets(a);
	x=0;
	while(a[i]!='\0')
	{
		if(i!=0)
		{
			if(a[i-1]==" ")
			{
				x=i;	
			}
		}
		
		if(a[i]==" ")
		{
			y=i;
			z=x;
			strcpy(b,a[x]);
			x++;
			strcpy(temp[x-1],a[x]);
			x++;
			while(x!=y)
			{
				strcat(temp,a[x]);
				x++;
			}
			strcat(temp,b);
			strcpy(string,temp[z]);
			
			z=z+1;
			for(k=z;k<y;k++)
			{
				strcat(string,temp[k]);
			}
			
			strcat(string,"ay ");
			
				
		}
		i++;
		
	}
	printf("The Pig Latin of given string:\n");
	printf("%s",string);
	getch();
	
}
