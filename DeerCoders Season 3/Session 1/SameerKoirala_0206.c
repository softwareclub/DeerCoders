#include<stdio.h>
#include<conio.h>
#define MAX 500
int main(){
	char string[MAX],word[MAX],temp[MAX];
	int i,j,k=0,count=0,rcount=0; //rcount counts repeated count
	
	printf("Enter String: ");
	gets(string);
	printf("The String is: ");
	puts(string);
	
	for(i=0;i<strlen(string)&&string[i]!=' ';i++){	//if(){	//since there is space between words
			word[i]=string[i];	//copy the first word to another char[]
			word[i+1]='\0';
			count++;		//to know the pointer			
	}
	printf("The first word is.");
	puts(word);
	
	for(i=count;i<strlen(string);i++){
		k=0;
		for(j=i;j<strlen(word)+i;j++){
			temp[k++]=string[i];
			temp[k]='\0';
		}
		if(strcmp(temp,word)==0){
				rcount++;
		}
	}
	printf("%d",rcount);
	/*
//Didn't work	
	for(i=0;i<strlen(string);i++){
		if(string[i]==word[i]){
			//printf("%c",string[i]);
			k=0;
			for(j=i;j<strlen(word)+i;j++){
				if(string[j]!='')
				temp[k++]=string[j];
				temp[k]=='\0';
			}			
			puts(temp);
			printf("\n%d",strcmp(temp,word));
			if(strcmp(temp,word)==0){
				ccount++;
			}		
		}			
	}
	printf("Repeated ");
	printf("%d",ccount);*/
}

