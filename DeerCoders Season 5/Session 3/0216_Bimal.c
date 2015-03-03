#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	int a,i;
	char text[100],key[20];
	char *word;
	printf("Enter a text:");
	gets(text);
	printf("The entered text is:");
	puts(text);
	
    printf("Enter the search key:");
    gets(key);
    
    for(i=0;i<strlen(text);i++){
    word = strtok(text," ");
    puts(word);
	}
    
    	for(i=0;i<strlen(text);i++){
    		while(text[i]=='\0'){
    			a = strcmp(text[i],key);
    			if(a == 0)	{
    				puts(text);
				}
				else
					printf("None");
    		}
    
		}
}
