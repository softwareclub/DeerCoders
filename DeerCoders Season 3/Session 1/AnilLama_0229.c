#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char string[10000],string2[10000],input[30],input2[30],a[30];
	int i,j,k,len,dist,flag=0,counta=0,countb=0,countc=0,countd=0;
	printf("Enter any string:\n");		
	gets(string);				//Get String.
	printf("Input string: %s",string);//Print input string.
	len = strlen(string);
	do
	{
		for(i=0;i<len;i++)		//Picking comparing string.
		{
			if(string[i]==' ')
			{
				break;
			}
			strcpy(input[i],string[i]);	
			dist=strlen(input);
		}
		while(j<len)			//Discovering whether the string is present or not on the input string.
		{
			for(k=0;k<dist;k++)
			{
				if(string[j]==' ')
				{
					break;
				}
				strcpy(input2[k],string[j]);
				if(strcmp(input2,input)==0)
				{
					flag=1;
				}
			}
			if(flag==1)
			{
				strcpy(a,input2);
				counta++;		
			}
			else
			{
				break;
			}
			j++;
		}
		
		
	}while(string!='\0');
	if(counta>1)
	{
		printf("Repeated Words\tRepeat Frequency");
		printf("%s\t%d",a,counta);
	}
	getch();
}
