#include<stdio.h>
main ()
{
	int i, j, digit,sum=0,count=0,temp;
	printf("Numbers with digits summing up to 6 are: \n");
	for (i=000;i<1000;i++)//loop for increment of the number to check
	{
		temp=i;
		for (j=0;j<3;j++)//loop to sum up the digits of a number
		{
			digit=temp%10;//separates each digit of the number
			sum=sum+digit;
			temp=temp/10;
		}
		if (sum==6)//statement to print the numbers with digits summing up to 6
		{
			count=count+1;
			if (i<10)
			{
			printf("00%d\n",i);
			}
			else if (i<100)
			{
				printf("0%d\n",i);
			}
			else
			{
				printf("%d\n",i);
			}			
		}
		sum=0;
	}
	printf("There are %d numbers with digits summing up to 6.",count);
}
