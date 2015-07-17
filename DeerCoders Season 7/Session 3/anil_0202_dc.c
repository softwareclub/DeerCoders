#include<stdio.h>
#include<conio.h>
int main()
{

	int num,dig1,dig2,dig3,count=0,number;// variable declaration
	for(num=100;num<=600;num++)// we check from 100 to 999 since we require only 3 digits number
	{
		
		number=num;// we manipulate the number in different variable since are using num as a loop counter
		dig3 = number%10;// Extracts 3rd digit of a number.
		number=number/10;
		dig2=number%10;//extracts second digit of a number
		number=number/10;
		dig1=number%10;	// extracts first digit of a number
		if(dig1+dig2+dig3==6)// check where the sum of inidividal digit is 6 or not
			{			
				count++;// gives the total number in final.
				printf("%d\t",num);// prints the number whose sum of individual digits is 6
			}
	}
	printf("\nTotal numbers whose sum of digits is 6 is %d",count);// prints the total number satifying the above condition
	getch();
}
