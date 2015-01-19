/*
 * This code is written in the Linux machine 
 * */

#include <stdio.h>
#include <string.h>	//to use the functions of strings
#define MAX 50		//maximum numbers of characters
int main()
{
	char str[MAX];
	char temp[MAX];
	char word[MAX][MAX]; //to store each words in 2D array
	int n=0,i=0,w=0;
	printf("Enter the English text:\n");
	scanf("%[^\n]",str);	//take user input
	
	do{						//seperate words from a string
        temp[n]=str[i];
        if(str[i]==' ')		//for words before last one
        {
            temp[n++]='\0';
            n=-1;
          	strcpy(word[w],temp);
          	int len = strlen(word[w]);
          	if(len > 2)
          	{
				word[w][len]=word[w][0];	//swap letters i.e. first word to last 
				word[w][0]=' ';				//remove the first letter of word
			}
           	strcat(word[w],"ay");			//concatinate the word ay at the end of every word
           	w++;
        }
        i++;
        n++;
        if(str[i]=='\0')		//for last word
        {
           	while(str[i]!=' ')
           	{
           		i--;
				temp[n]=str[i];
           	}
           	temp[n++]='\0';
           	strcpy(word[w],temp);
           	int len = strlen(word[w]);
           	if(len > 2)
           	{
				word[w][len]=word[w][0];	//swap letters i.e. first word to last 
				word[w][0]=' ';				//remove the first letter of word
			}
           
           	strcat(word[w],"ay");			//concatinate the word ay at the end of every word
           	w++;
           	break;
        }
    }while(1);
        
	for(i=0;i<w;i++)
	{
		printf(" %s ",word[i]);	//print the pig latin sentences
	}
return 0;
}
