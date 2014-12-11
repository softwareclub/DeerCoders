#include<stdio.h>
#include<conio.h>

void threeDigit();// function for 3 digit number
void fourDigit();//function for 4 digit number

int main()


{
	int choice;
	printf("Enter 1 for printing repetitions for three digit numbers and 2 for repetitions  for four digit numbers:\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		threeDigit();
	}
	
	else if (choice==2)
	{
		fourDigit();
	}
	
	
	
	getch();
	return 0;
}

void threeDigit()
{
	int  num, first, second, third ;
	int count=0;// intializes the count of frequency for number with repetitions
	printf("For three digit numbers:");
	
	for(num=100;num<=999;num++)

	{
		
		third=num%100;
		third=third%10;//seperating third number
		
		second=num/10;
		second=second%10;//seperating second number
		
		first=num/100;//seperating first number
		
		
		
		//checking condition for only two repetitions per 3 digit number
		if(first==second&second!=third)
		{
			
				printf("%d\n",num);
				count++;
			
		}
		
		else if(second==third&&first!=second)
		{
			
				printf("%d\n",num);
				count++;
			
		}
		else if(first==third&&second!=third)
		{
			
			printf("%d\n",num);
			count++;
			
		}
	
	}	
		printf("The number with 2 repetitions in 3 digit number is %d\n",count);
		
}

void fourDigit()

{
	int  num, first, second, third,fourth ;
	int counts=0;// intializes the count of frequency for number with repetitions
	printf("For four digit numbers:");
	
	for(num=1000;num<=9999;num++)
	{
		
		fourth=num%1000;
		fourth=fourth%100;
		fourth=fourth%10;//seperating fourth number 
	
		third=num%1000;
		third=third/100;//seperating first number
		
	
		second=num%1000;
		second=second%100;
		second=second/10;//seperating second number
		
		first=num/1000;//seperating first 
		
		
		//checking the condition for only 2 repetition in 4 digit number
		if(first==second&&first!=third&&first!=fourth)
		{
			printf("%d\n",num);
			counts++;
			
		}
		else if(first==third&&first!=second&&first!=fourth)
		{
			printf("%d\n",num);
			counts++;
			
		}
		
		else if(first==fourth&&first!=second&&first!=third)
		{
			printf("%d\n",num);
			counts++;
		}
		
		else if(second==third&&second!=first&&second!=fourth)
		{
			printf("%d\n",num);
			counts++;
		}
		else if(second==fourth&&second!=first&&second!=third)
		{
			printf("%d\n",num);
			counts++;
		}
		else if(third==fourth&&third!=second&&third!=first)
		{
			printf("%d\n",num);
			counts++;
		}
		
	}
	printf("The 2 repititions for 4 digit number has a frequency %d",counts);// print the frequency
	
	
	
}
