#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
int main()
{
    int i=0;
    char x1[MAX],x2[MAX],temp;
    printf("The value of x1 is ");
    scanf("%[^\n]",x1);
    do
    {
    	         temp=x1[i];
    	         while(x1[i]!=' ')
    	         {
    	         	printf("%c",x1[++i]);
    	         }
                 printf("%cay ",temp);
                 i++;
	}  while(x1[i]!='\0');
    getch();
    exit(0);
}

