#include<stdio.h>
#include<string.h>
void print(char str[]);
int main()
{
	char string[1000];
	printf("Enter string: ");
	gets(string);
	print(tolower(string));
}
void print(char str[])
{
	int i, j=0;
	char sr[100];
	char result[100]=" ";
	char cstr[100];
	for(i=0;i<strlen(str);i++)
	{
		 sr[j++]=str[i];
		 if(str[++i] == ' ')
		 {
		 	strcpy(cstr,sr);
		 	if(strcmp(str, cstr) == 0) //Compares the if word is not repeated doesnot concatenate to result.
		 	{
		 		strcat(result,cstr);
		 		strcat(result," ");
		 		strcpy(sr," ");
		 		continue;
		 	}
		 	strcpy(sr," ");
		 }
	}
	printf("%s", result); //prints the result.
}

