#include <stdio.h>
#include <string.h>
#include<conio.h>

void translatePigLatin(char *);

int main(void){

	char input[100]; // input array
	char *ptr; 
	char *pigTransPtr;

	puts("Enter a sentence: ");
	gets(input);
	
	printf("\nYour input is: ");
	puts(input);

	ptr=strtok(input," "); //  strtok is tokenizing string for each space
	
	printf("The Pig Latin transformation of the input is  :");

	while (ptr!="NULL")// runs until pointer points to a character and not null
	{
		
		
		translatePigLatin(ptr);
		ptr=strtok(NULL, " ");

		if (ptr!=NULL)
		{
			printf(" ");
		}
		
	}

	getch();

}
//The Translating Function
void translatePigLatin(char *pigLatino){

	int i;
	
	
	for (i = 1; i < strlen(pigLatino); i++)
	{
		printf("%c", pigLatino[i]);
	}
	
	printf("%c%s", pigLatino[0],"ay");

}
