#include<stdio.h>
#include<string.h>
main()
{
	char line[100];
	char *token;
	char letter[30];
	char a[50];
	int i=0;
	printf("enter the sentence");
	gets(line);
	printf("enter the letter");
	gets(letter);
	while(line[i]!='\0')
	{		
		token=strtok(line," ");
		a[i]=token;
		if(strcmp(a[i],letter)==0)
		{
			printf("The entered word is",token);
			i++;
			token=strtok(NULL," ");
			continue;
		}
		i++;
	}
}
