#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define Max 1000
int main()
{
	char input[Max],output[Max],temp[Max],x[Max];      // declaration of variable;
	char ch;                                           //declaration of variable;
	int i;                                            //declaration of variable;
	printf("Enter the string \n");
	gets(input);                              //taking input from user
    while(input[i]!='\0')                     //loops runs until Null value which is end of string
    {
    	while(ch=input[i++]!=' ')             //loop runs until there comes a character space in input string
    	{
    	    temp[i]=input[i];	              // Storing the single word in temp
    	}
    	while(output[i++]==' ')               //loops runs until there comes a character space in output string
    	{
    		x[i]=output[i];                   //Storing the word of output string
    	if(strcmp(temp,x)==0 )                //compare that word taken from output strig is equal to word store in the temp or not
    	{
    		continue;                      // if matches then do nothing but continue the flow;
    	}
    	else
    	{
    		strcat(output,temp);              //if not matches then store that word in output string
    	}	
    	
    	}
    	
    	
        i++;
    }
     
	printf("Final string\n");
	puts(output);
	getch();
	exit(0);
}
