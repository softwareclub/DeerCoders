#include <stdio.h>
#include <string.h>
#define MAX 50
int main()
{
	char input[MAX];
	int i;
	char dString[20][MAX]; //to store the decomposed string in 2D array
	char temp[20];
	int count = 0;
	
	//take input from users
	printf("Enter string :\n\n");
	scanf("%s",input);
	
	//seperate words in the sentences 
	do{
		while(input[i] == ' ') 
		{
			temp[i] = input[i]; //store each seperated word in temporary array
			printf("%s",temp);
		}
		strcpy(dString[i],temp);
		i++;
	}while(input[i] == '\n');
	
	
	//compare each words 
	for(i=0;i<MAX;i++) {
		if(strcmp(dString[i],dString[i])==0) {
			count++;		//increase count if words are same
		}
	}
	printf("%d",count); //print frequency of repeated words
	
return 0;
}
