#include<stdio.h>
#include<conio.h>

int main()
{
	int num,num1,num2;
	float div,sum;
	{
		for(num=0;num<99;num++)
		{
			num1=num%10;
			num2=num/10;
			sum=num1+num2;
			div =(float)( num/sum);
			
			if (div==7 && num2==num1+4)
				printf(  "The required numbers are %d ",num);
			
		}
		return 0;
		
	}
}
