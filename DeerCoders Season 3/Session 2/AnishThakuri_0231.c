#include<stdio.h>
#include<conio.h>
#include<math.h>
void threedigits(void);   //function declaration to generate the three digits number
void fourdigits(void);    //function declaration to generate the three digits number
int main()
{
	int num;                                                      //variable declaration
	printf("Which digit number you want to choose 3 or 4 \n");     
	scanf("%d",&num);
	switch (num)            //check either it is 3 digits or 4 digits
	{
		case 3:
			threedigits();      //calling function for three digits number
			break;
		case 4:
			fourdigits();       //calling function for four digits number
			break;
			
		default:
			printf("Sorry you enter number other than 3 and 4. Please enter either 3 or 4 \n");
			break;
	}
getch();
}
void threedigits()      //function defination for threedigits number
{
	int x,y,z,count = 0;
	printf("\nThe 3 digit number in which two digits are same in different position are: \n");
	for(x=1;x<=9;x++)
	{
		for(y=0;y<=9;y++)
		{
			for(z=0;z<=9;z++)
			{
				if(x==y && x!=z || x==z && x!=y || y==z && y!=x)
				{
					printf("%d%d%d\t",x,y,z);
					count++;
				}
				
			}
		}
	}
	printf("\nThe number of digits is %d",count);
}
void fourdigits()      //function defination for threedigits number
{
   	int x,y,z,a,count = 0;
   	printf("\nThe 4 digit number in which two digits are same in different position are: \n");
	for(x=1;x<=9;x++)
	{
		for(y=0;y<=9;y++)
		{
			for(z=0;z<=9;z++)
			{
				for(a=0;a<=9;a++)
				
				{
				if(x==y  && x!=z && x!=a || x==z  && x!=y && x!=a || x==a  && x!=y && x!=z 
				|| y==x  && y!=z && y!=a || y==z  && y!=x && y!=a || y==a  && y!=x && y!=z 
				|| z==x  && z!=y && z!=a || z==y  && z!=x && z!=a || z==a  && z!=y && z!=x )                                                                
				{
					printf("%d%d%d%d\t",x,y,z,a);
					count++;
				}	
				}
				
				
			}
		}
	}
	printf("\nThe number of digits is %d",count);
}

