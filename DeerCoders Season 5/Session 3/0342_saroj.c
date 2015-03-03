#include <stdio.h>
#include<ctype.h>
#define MAX 20

int main()
{
	char string[MAX],search[2],temp[MAX];
	int i=0,indx;
	printf("Enter the string");
	gets(string);
	printf("Enter the character which you want to be used for wild card");
	gets(search);
	if (search[1]=='*')
	{
		
		while(string[i]!='\0')
		{
			
			if (string[i]==search[0] || toupper(string[i]==toupper(search[0])))
			{
				indx=i;
			
			
			while (string[indx]!=' '|| string[indx]!='\0')
			{
				printf("%c",string[indx]);
				indx++;
				i=indx;
			}
			
			}
			i++;
		
			
		}
	}
	else{
		printf("invalid");
	}
	
}
