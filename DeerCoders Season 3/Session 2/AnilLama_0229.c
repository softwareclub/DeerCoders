//Limitation: Not every numbers are printed out on console since it exceeds console's threshold and cannot show them all.

#include<stdio.h>
#include<conio.h>

int check_three(int);		//function declaration
int check_four(int);		//function declaration
int check_five(int);		//function declaration

int main()
{
	int i,a,b,c,number1,number2,number3;
	int count1 = 0, count2 = 0, count3 = 0;
	
	printf("All number of 3 digits are:\n");
	for(i=100;i<=999;i++)
	{
		number1 = check_three(i);		//function call for three digit number.
		count1 = count1 + number1;		//counting number of three digit number.
	}
	
	printf("\n\nAll number of 4 digits are:\n");
	for(i=1000;i<=9999;i++)
	{
		number2 = check_four(i);		//function call for four digit number.
		count2 = count2 + number2;		//counting number of four digit number.
	}
	printf("\n");
	printf("And the number of required 3digit numbers is %d.",count1);		//print three digit count.
	printf("\n");
	printf("And the number of required 4digit numbers is %d.",count2);		//print four digit count.
	
	
	getch();
}

int check_three(int n)		//function to check the 3digit number and return 1 if true to increase number of digits. 
{
	int j,a,b,c,rem;
	int count=0,count_no=0;
	while(n>0)
	{
		count++;
		rem = n%10;
		if(count==1)
		{
			a = rem;
		}
		else if(count==2)
		{
			b = rem;
		}
		else
		{
			c= rem;
		}
		n = n/10;
	}
	
	
	for(j=1;j<=1;j++)		
	{
		//checking the 3 digit number and print if true.
		if(a==b || b==c ||a==c)		
		{
			if((a==b && a==c) || (a==b && b==c) || (a==c && b==c) )
			{
				break;
			}
			count_no++;
			printf("%d%d%d\t",c,b,a);
		}

	}
	return count_no;
}

int check_four(int n)		//function to check the 4digit number and return 1 if true to increase number of digits. 
{
	int i,a,b,c,d,rem,count_no = 0;
	int count=0;
	while(n>0)			
	{
		count++;
		rem = n%10;
		if(count==1)
		{
			a = rem;
		}
		else if(count==2)
		{
			b= rem;
		}
		else if(count==3)
		{
			c= rem;
		}
		else
		{
			d= rem;
		}
		n = n/10;
	}
	
	
	for(i=1;i<=1;i++)
	{
		//checking the 4 digit number and print if true.
		if(a==b || a==c || a==d || b==c || b==d || c==d)
		{
			if((a==b && a==c) || (a==b && a==d) || (a==c && a==d)) 
			{
				break;
			}
			else if((b==a && b==c) || (b==a && b==d) ||(b==c && b==d))
			{
				break;
			}
			
			else if((c==a && c==b) || (c==a && c==d) || (c==b && c==d))
			{
				break;
			}
			else if((d==a && d==b) || (d==a && d==c) || (d==b && d==c))
			{
				break;
			}	
				
			count_no++;
			printf("%d%d%d%d\t",d,c,b,a);
		}

	}
	return count_no;
	
}
