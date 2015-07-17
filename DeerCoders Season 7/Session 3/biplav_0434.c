//Program to find the 3 digit numbers whose sum of digits is equal to six
#include<stdio.h>
int main()
{
	int i,temp,sum=0,num=100,digit[3],count=0;		//declaring required variables
	for(num=000;num<=999;num++)				//initializing for loop to loop from 000 to 999(3 digit numbers)	
	{
		temp=num;							//storing the number to be checked in temporary variable
		//dividing the number into digits
		digit[0]=temp%10;					
		digit[1]=(temp/10)%10;	
		digit[2]=(temp/100);
		//summing the digits
		sum=digit[0]+digit[1]+digit[2];
		if(sum==6)							//checking if the sum is equal to six
		{
			//displaying the number whose sum of digits is equal to six
			for(i=0;i<3;i++)
			{
				printf("%d",digit[i]);
			}
			printf("\n");
			count++;
		}
	}
	//displaying the total number of digits that fulfill the criteria of the question
	printf("\n\nThe total number of 3 digit numbers whos sum of digits is equal to six is %d",count);
}
