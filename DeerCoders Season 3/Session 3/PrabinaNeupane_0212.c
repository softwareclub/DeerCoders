#include<stdio.h>
#include<string.h>
# define MAX 100
# define SPACE 10

struct str{
	char word[MAX];
	int count;
};

int main()
{
	char t[MAX][MAX];
	struct str words[MAX];
	char string[MAX], temp;
	int i,j,k=0, l=0, n=0, least, r, m;
	printf("Enter the string here");
	gets(string);
    // split token
    for(i=0; string[i] != '\0'; i++)
    {
     if(string[i] == SPACE)
     {
     n++;
	 for(j = i, l= least-1; j>=i-least; j--,l--)
	 {
	 	t[k][l]= string[j];
	 }	
	 t[k][l] = '\0';
     
     for(m=0; m< least; m++)
     {
         words[r].word[m] = t[k][m];	
     }
     r++;
     k++;
     least = 0;
    }
    else{
    	least++;
    }
}
for(j = i-1, l =least-1; j>= i- least; j--,l--)
{
	t[k][l] = string[j];
}

t[k][l]= '\0';

for(m = 0; m < least; m++){
		
		words[r].word[m] = t[k][m];
		
	}
	
while(words[r].word[0] != ' ')
{
	strcpy(temp, words[r].word[m]);
}

	
}
