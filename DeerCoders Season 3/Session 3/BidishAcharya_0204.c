#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i=0, len;
	char s1[100],s2[100],temp;
    printf("Enter the string: ");
    gets(s1);
    puts(s1);
    len = strlen(s1);
    for(i=0; i<=len; i++)
    {
    while(s1[i] == ' ')
   	         {
   	         	strcpy(s2,s1);
   	         	i++;
   	         }
   	}
   	
   	for(i=1;i<=len; i++)
   	{
   		strcpy(s2[i--],s1[i]);
   		strcat(s2, temp);
   		strcat(s2, 'ay');
   	}
   	
//   	printf("The value is:", s2);
}
