#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100

int print(char *, int);

int main(){
	
	char str[MAX];
	char search[MAX];
	int i;
	
	printf("\nEnter a string: ");
	gets(str);
	
	printf("\nEnter a search item: ");
	gets(search);															//asks for a search keyword
	
	if(strlen(str) > 0){
		if(toupper(str[0]) == toupper(search[0])){							//Compares the first character of the first word of the sentence
			
			print(str, 0);
		}
		if(strlen(search) == 2 && search[1] == '*'){						//Checks if the keyword is valid
			
			for(i = 1; str[i] != '\0'; i++){
				
				if(str[i - 1] == ' ' && toupper(str[i]) == toupper(search[0])){
					printf(" ");
					i = print(str, i);										//prints and assigns the next index to start checking with
				}
			}
		}
	}
	getch();
}

int print(char *str, int i){
	
	for(; str[i] != ' ' && str[i] != '\0'; i++){
		
		printf("%c", str[i]);
	}
	return i - 1;
}
