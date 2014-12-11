#include <stdio.h>
#define MAX1 999
#define MAX2 9999
void three_digit();
void four_digit();
int main()
{
	int digit;
	printf("For how many digits: (3,4)?\t");
	scanf("%d",&digit);
	switch(digit)
	{
		case 3:
			three_digit();
			break;
		case 4:
			four_digit();
			break;
		default:
			break;
	}
	return 0;
}
void three_digit()
{
	int i,count=0;
	int temp[3];
	for(i=100;i<MAX1;i++)
	{
		//seperate digits
		temp[0] = i/100;
		int y = i%100;
		temp[1] = y/10;
		temp[2] = y%10;
		
		if(temp[0] == temp[1] && temp[1] != temp[2])
		{
			printf("%d\t",i);
			count++;
		}
		else if(temp[1] == temp[2] && temp[0] != temp[1])
		{
			printf("%d\t",i);
			count++;
		}
		else if(temp[0] == temp[2] && temp[0] != temp[1])
		{
			printf("%d\t",i);
			count++;
		}
	}
	printf("\nNo. of same 2 digits = *%d*",count);
}
void four_digit()
{
	int i,count=0;
	int temp[4];
	for(i=1000;i<MAX2;i++)
	{	
		//seperate digits	
		temp[0] = i/1000;
		int y = i%1000;
		temp[1] = y/100;
		int z = y%100;
		temp[2]= z/10;
		temp[3] = z%10;
		
		if(temp[0] == temp[1] && temp[0] != temp[2] && temp[0] != temp[3])
		{
			printf("%d\t",i);
			count++;
		}
		else if(temp[0] == temp[2] && temp[0] != temp[1] && temp[0] != temp[3])
		{
			printf("%d\t",i);
			count++;
		}
		else if(temp[0] == temp[3] && temp[0] != temp[1] && temp[0] != temp[2])
		{
			printf("%d\t",i);
			count++;
		}
		else if(temp[1] == temp[2] && temp[1] != temp[0] && temp[1] != temp[3])
		{
			printf("%d\t",i);
			count++;
		}
		else if(temp[1] == temp[3] && temp[1] != temp[0] && temp[1] != temp[2])
		{
			printf("%d\t",i);
			count++;
		}
		else if(temp[2] == temp[3] && temp[2] != temp[0] && temp[2] != temp[1])
		{
			printf("%d\t",i);
			count++;
		}
	}
	printf("\nNo. of same 2 digits = *%d*",count);
}
