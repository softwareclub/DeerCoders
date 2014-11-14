#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 9
int y[MAX];
void push(int , int, int );

int main()
{
	int a, w, x, counter;//declaring three variable
	printf("enter the number\n");
	scanf("%d", &a);
	counter=0;
			do{
				x=a%10;
				a=a/10;
				//a=w;
				counter++;//send array index as counter
				//printf("%d%d%d\n\n", x, a, counter);
				
			push(x, a, counter);
			
				
			}
			while(a!=0);
			
			
		
			printf("%d", y);
			
		//	push(x, 0, counter);
}

void push(int i, int b, int j){
	
		
			y[j-1]=i;
	//	printf("\n%d", y[j-1]);
		
	  // printf("index array %d\n", j-1);
	  switch(j-1){
	   	
	   	case 0:
	   		printf("%d", y[j-1]);
	   		break;
	   
	   case 1:
	   		printf("%d", y[j-1]);
	   		break;
	   		
	   case 2:
	   		printf("%d", y[j-1]);
	   		break;
	   
	   case 3:
	   		printf("%d", y[j-1]);
	   		break;
			   
		case 4:
	   		printf("%d", y[j-1]);
	   		break;
	   
	   case 5:
	   		printf("%d", y[j-1]);
	   		break;
			   
		case 6:
	   		printf("%d", y[j-1]);
	   		break;
	   
	   case 7:
	   		printf("%d", y[j-1]);
	   		break;
			   
			   case 8:
	   		printf("%d", y[j-1]);
	   		break;
	   
	   case 9:
	   		printf("%d", y[j-1]);
	   		break;	
			   
			   default:
			   printf("done");   	
	   	
	   	
	   	
	   	
	   }
	}
	
