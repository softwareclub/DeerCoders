#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 200

int main(){
	char str[MAX];
	char eachword[MAX];
	char cpy[MAX];
	char piglatin[MAX];
	
	char temp;
	int i=0,j=0,k,l;
	
	printf("Enter String: ");
	scanf("%[^\n]",str);
	
	printf("\nYour string is: %s", str);	
	
	//Assumtion the input string will have first Character in uppercase
	str[i]=tolower(str[i]);	//convert first character to lowercase
	
	piglatin[0]='\0';
	
	do{

		eachword[j]=str[i];
		
		if(str[i]==' '){		        
	
			eachword[j]='\0';
	
			j=-1;
			l=0;
	
			temp=eachword[l];		//get first char
	
			for(k=1;eachword[k]!='\0';k++){
	
				cpy[l]=eachword[k];		//add to another array from second array
				l++;
	
			}
	
			cpy[l]=temp;			//add first char to end 
			cpy[++l]='\0';
			strcat(cpy,"ay ");			//add 'ay ' to the last 
			strcat(piglatin,cpy);			
						
		}
	
		i++;
		j++;
		
		if(str[i]=='\0'){			//for last word
    	
		       	while(str[i]!=' '){
        
		    		i--;
					eachword[j]=str[i];
        
		    	}
        
		    	eachword[j]='\0';
        
		    	l=0;
            	temp=eachword[l];
		
				for(k=1;eachword[k]!='\0';k++){
		
					cpy[l]=eachword[k];
					l++;
		
				}
		
				cpy[l]=temp;
				cpy[++l]='\0';
		
				strcat(cpy,"ay ");
				strcat(piglatin,cpy);
        
		    	break;
        }

	}while(1);	
	
	piglatin[0]=toupper(piglatin[0]);		//converting first character to upper case

	printf("\n\nThe Pig Latin form of the enter string is: \n%s",piglatin);
	getch();	
	
	return 0;
}

