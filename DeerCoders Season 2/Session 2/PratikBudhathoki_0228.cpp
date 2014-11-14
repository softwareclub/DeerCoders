# include <stdio.h>
# include <conio.h>

int main()
{
	int num;
	int n[7]={0};
	int i;
	int flag = 0;
	int first;	
	
	printf("Enter the number :  ");
	scanf("%d",&num);
	
	for(i=6; i>=0; i--)
	{ 
			if(num<10)
			{
				n[i] = num;
				break;
			}
			else
			{
				n[i] = num%10;
				num = num/10;
			}			
			
		
	}
	
	for(i=0; i<7; i++)
	{
		if(n[i]!=0)
		{
			first = i;
			break;
		}
	}
	
	

while(first<7)
{
	if(first==0||2||5)
	{
		
			switch(n[first])
			{	
			case 1:
				printf("Ten ");
				break;
				
			case 2:
				printf("Twenty ");
				break;
				
			case 3:
				printf("Thirty ");
				break;
				
			case 4:
				printf("Fourty ");
				break;
				
			case 5:
				printf("Fifty ");
				break;
				
			case 6:
				printf("Sixty ");
				break;
				
			case 7:
				printf("Seventy ");
				break;
				
			case 8:
				printf("Eighty ");
				break;
				
			case 9:
				printf("Ninty ");
				break;
			}
			
			
	}
		
	if(first==1||3||4||6)
	{
		switch(n[first])
		{	
		case 1:
			printf("One ");
			break;
				
		case 2:
			printf("Two ");
			break;
				
		case 3:
			printf("Three ");
			break;
				
		case 4:
			printf("Four ");
			break;
				
		case 5:
			printf("Five ");
			break;
				
		case 6:
			printf("Six ");
			break;
				
		case 7:
			printf("Seven ");
			break;
				
		case 8:
			printf("Eight ");
			break;
				
		case 9:
			printf("Nine ");
			break;
		}
	}	
	
		

	if(first==0||1);
	{
		printf("Lakh ");	
	}
		
	if(first==2||3)
	{
		printf("Thousend ");
	}
	if(first==4)
	{
		printf("Hundred and ");
	}

	

	first++;
}


getch();
}
