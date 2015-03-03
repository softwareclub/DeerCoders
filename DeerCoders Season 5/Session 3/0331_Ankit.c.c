#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 32

int main() {
	int i;
	char a[max];
	char b;
	printf("Enter the text:\n ");
	gets(a);
	printf("The text is: %s", a);	
	printf("\nEnter the word to search: ");
	scanf("%c", &b);
	printf("%c", b);	
	for(i=0;i<a;i++)
	{
		if(a==" "){
			printf("The letter is: %s", a[i+1] );
		
		}
	}
	
	
}
