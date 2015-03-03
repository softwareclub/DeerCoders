#include<stdio.h>
#include<string.h>
main()
{
	char sen[100]; 
	char w;
	char *token;
	int l,i;
	printf("Enter any string\n");
	gets(sen);
	l=strlen(sen);
	printf("Enter the word that you want to search and starts with: \n");
	w=getchar();
	token=strtok(sen," ");
	for(i=0;i<l;i++);
	{
		if(sen[i]==w)
		{
		 token=strtok(sen,"w");
		 printf("The words that starts with the letter you entered are %c",token);
		}
	}
}
