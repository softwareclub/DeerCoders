#include<stdio.h>
#include<conio.h>
int main() 
{
	int sum,n,i;			//initialization of variables
	printf("The 3 digits numbers which sum of each digit is 6 are:\n");					
	for(i=1;i<=600;i++)     //since >600 adds more than 6
	{
		sum=0;		         //since sum changes after while loop
		n=i;				//if we use i, then value of i changes after while  loop so we assigned value of i to n
		while(n!=0)  		//if n=0, it terminates the loop
		{
			sum+=(n%10);	//sum=sum+(n%10) which adds each digit starting from last to the sum. for example, if n=354 then sum=0+4=4
			n/=10;			//n=n/10 . here, value of n changes to 2 digits number. For example, if n=354 then here, n changes to 35
		}
		if(sum==6)			//checking condition if sum is equal to 6
		{
			if(i<100)
			{
				if(i<10)
					printf("00");   	//prints 00 if number is less than 10.For example if number is 6 then it prints 006
				else
					printf("0");			//prints 0 if number is less than 100. for example, if number is 15 then it prints 015
			}	
			printf("%d\n",i);		//prints 3 digit number if condition (sum==6) is true				
		}		
	}
}
