#include<stdio.h>
#include<conio.h>
void check(int , int*, int*);
int num(int );
int repeat3(int );
int repeat4(int );
int main()
{
	int i, *num3, numb3=0,*num4, numb4=0;  //num3 to keep number for 3 digits. Similarly num4 for 4 digits.
	num3=&numb3;
	num4=&numb4;
	for(i=100;i<=9999;i++)
	{
		check(i, num3, num4);	
	}
	printf("\nDigit with same number in 3 digits= %d", *num3);
	printf("\nDigit with same number in 4 digits= %d", *num4);
	getch();
}
void check(int i, int *num3, int *num4) //Check whether the number contains two digits and not. If print return 1 to print.
{
	int flag;
	flag=num(i);
	switch(flag)
	{
		case 3:
			if(repeat3(i))
			{
				*num3+=1;
				printf("%d\t", i);
			}
			break;
		case 4:
			if(repeat4(i))
			{
				*num4+=1;
				printf("%d\t", i);
			}
			break;
	}
}

int num(int i)//To check the number whether it is 3-digit or 4-digit 
{
	int count=0;
	while(i!=0)
	{
		i/=10;
		count++;
	}
	return count;
}
int repeat3(int i)//To check the numbers repeat in 3-digits
{
	int a, b, c;
	a=i%10;
	i/=10;
	b=i%10;
	i/=10;
	c=i%10;
	if(a==b)
	{
		if(b==c||a==c)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if(b==c)
	{
		if(a==b||a==c)
		{
			return 0;
		}
		else 
		{
			return 1;
		}
	}
	else if(a==c)
	{
		if(a==b||b==c)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}

int repeat4(int i)//To check the numbers repeat in 4 digits
{
	int a, b, c, d;
	a=i%10;
	i/=10;
	b=i%10;
	i/=10;
	c=i%10;
	i/=10;
	d=i%10;
	if(a==b||c==d)
	{
		if(b==c||a==c||a==d||b==d)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if(a==c||b==d)
	{
		if(a==b||b==c||a==d||c==d)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else if(a==d||b==c)
	{
		if(a==b||a==c||b==d||c==d)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}
