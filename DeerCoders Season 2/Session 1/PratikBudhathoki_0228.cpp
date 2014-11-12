# include <stdio.h>
# include <conio.h>
# include <time.h>
# include <stdlib.h>

int main()
{
	int low,up,num;
	int list[50];
	int fre[50];
	int i,j,k,temp;
	int count = 0;
	int rep = 1;
	
	srand(time(NULL));
	
	while(count<50)
	{
			num = rand()%100;
	
			if(num>=10&&num<=40)
			{
				list[count] = num;
				count++;
			}
			
		
	}
	
	for(count=0; count<50; count++)
	{
		printf("%d ",list[count]);
	}

	
	
/*	
	for(i=0; i<50; i++)
	{
		
			fre[i]=list[count];
			for(k=i; k>0; k--)
			{
				if(fre[i]!=fre[k])
				{
					for(j=i;j<50;j++)
					{
						if(fre[i] == list[j])
						rep++;
					}
					
				}
				else
				{
					count++;
					break;
				
				}				
			}
			printf("%d --> %d\n",fre[i],rep);
			
	
	}
	
*/
	
	for(i=0; i<50; i++)
	{
		for(j=0; j<i; j++)
		{
			if(list[i]<list[j])
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
	}
	
	for(count=0; count<50; count++)
	{
		printf("%d ",list[count]);
	}
	
//second
/*
for(i=0;i<50;i++)
{
	rep=1;
	
	for(j=i;j<50;j++)
	{
		fre[i]=list[j];
		if(fre[i]!=list[j]);
		{
			rep++;
		}
	}
	printf("%d --> %d\n",fre[i],rep);
	fre
}	
*/	
}
