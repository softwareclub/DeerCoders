#include<stdio.h>
int main()
{
	int num,num1,num2,sum; //num is the required number where num1 and num2 are the part of num
	
	for(num=0;num<99;num++)
	{
		num1=num/10;
		num2=num%10;
		sum=num1+num2;
	
	 if(num2+4 == num1 && (float)num/(float)sum == 7)
	   {
		printf(" The number is %d ",num);
	   }  
    }
     
        printf("\n\n**THANK YOU**");

}
