#include<stdio.h>
#include<conio.h>

char *function1(int);

char *function2(int);

char *function3(int);

int main(){
	
	int num[10]={0};
	int next_number[10] = {0};
	int temp;
	int user_num, range;
	int i,remainder;
	int number;
	
	printf("Hi,Enter any number you want : ");
	scanf("%d",&user_num);
	
	//whole number is separated
	temp = user_num;
	i = 9;
	while(temp != 0){
		remainder = temp % 10;
		temp = temp/10;
		num[i] = remainder;
		i--;
	}
/*	range = i;
	//printf("%d",range);
	
	for(i = 0; i < range ; i++)
	{
		next_number[i] = num[(range-1)-i];
	}
*/	

	//printing in words
	for(i = 0 ; i < 10; i++)
	{
		
		
		if(i == 0 || i == 2 || i == 3 || i == 5)
		{
			printf("%s ",function1(i));
		}
		
		else if(i == 1){
			printf("%s",function3(i));
		}
		
		else if(i== 2|| i == 4 || i == 6)
		{
			printf("%s",function2(i));
		}
		
	}
		
	return 0;	
}

char *function1(int num){
	
	switch(num){
		
	
		case 1:
			return("one");
			break;
		
		case 2:
			return("two");
			break;
		
		case 3:
		    return("three");
			break;
			
		case 4:
			return("four");
			break;
			
		case 5:
			return("five");
			break;
			
		case 6:
			return("six");
			break;	
			
		case 7:
			return("seven");
			break;
			
		case 8:
			return("eight");
			break;							
		
		case 9:
			return("nine");
			break;	
			
		case 10:
			return("ten");
			break;	
			
		case 11:
			return("eleven");
			break;	
			
		case 12:
			return("twelve");
			break;
			
		case 13:
			return("thirteen");
			break;
			
		case 14:
			return("fourteen");
			break;
			
		case 15:
			return("fifteen");
			break;
			
		case 16:
			return("sixteen");
			break;
			
		case 17:
			return("seventeen");
			break;
		case 18:
			return("eighteen");
			break;
			
		case 19:
			return("nineteen");	
			break;
			
		default:
			return("");										
	}
	
}


char *function2(int num){
	
	switch(num){
		
		case 2:
			return("hundred");
			break;
			
		case 4:
			return("thousand");
			break;
			
		case 6:
			return("lakh");
				
	}
	
}

char *function3(int num){
	
	switch(num){
		
		case 2:
			return("twenty");
			break;
			
		case 3:
			return("thirty");
			break;
			
		case 4:
			return("fourty");
			break;
			
		case 5:
			return("fifty");
			break;
			
		case 6:
			return("sixty");
			break;
			
		case 7:
			return("seventy");
			break;
			
		case 8:
			return("eighty");
			break;		
			
		case 9:
			return("ninety");
			break;		
	}
}
