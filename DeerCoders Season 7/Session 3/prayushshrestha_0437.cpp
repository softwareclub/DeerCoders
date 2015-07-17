#include<stdio.h>
int main()
{
	int i,digit_1;//declaring the variables
	int remainder,digit_3,digit_2;//declaring the variables
	int sum;//declaring the variable
	int count = 0;//initializing count = 0 
	for(i=000;i<=999;i++)//starting of loop (i = initial value , i <= ending point ;increament by 1)
	{
		
		digit_1=i % 10;//modular dividing to get the remainder which is the digit
	
		remainder = i/10;//integer division to get the remaining digit
	
		digit_2=remainder%10;//modular dividing to get the remainder which is the digit
	
		digit_3=remainder/10;////modular dividing to get the remainder which is the digit
	
		sum = digit_1+digit_2+digit_3;//finding the sum of digits
		if(sum==6) //using the loop for condition check
		
		{
			count = count+1;//increasing the count when the number is 6
			printf("number is %d\n: with digits %d + %d + %d \n",i,digit_3,digit_2,digit_1);//printing the number with its digits
			
		}
		
		
	
	}
	printf("total number : %d\n",count);//printing the number of numbers whose sum is 6
	
	
	
}

