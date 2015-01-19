#include<stdio.h>
#include<string.h>
struct string{
	char *word;
};
int countspace(char st[]);
void Piglatin(char str[]);
int main()
{
	char string[100]="The quick brown fox";
	Piglatin(string);
}
void Piglatin(char str[])
{
	int count=countspace(str), position=0, i=0, place=0;
	struct string *s, string2[100];
	s = (struct *)malloc(count * sizeof(struct string));
	while(str[position]!='\0')
	{
		if(str[position]!=' ')
		{
			string2[i++]=str[position++];
		}
		else
		{
			s[place].word=(char *)malloc(strlen(string2) * sizeof(char));
			strcpy(s[place++].word, str);
			strcpy(str,'\0');	
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%say", *(s[i].(*word)));
	}
}
int countspace(char st[])
{
	int i, count=0;
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]==' ')
		{
			count++;
		}
	}
	return count;
}

