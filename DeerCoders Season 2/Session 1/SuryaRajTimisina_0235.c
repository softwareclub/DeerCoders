#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
	int i ,j = 0;
	int num;
	int temp;
	int array[50];
	for(i =0; i < 40; i++)
	{
		num = rand()%40;                         // generating random numbers
		
		if(num >= 10)
		{
			array[i] = num;
			printf("%d  ",num);	
		}
	
   }
   for(i=0; i<40; i++)                        //for sorting
   {
   		for(j=0; j<39; j++)
   			{
   				if(array[j]> array[j+1] )       
   					{
   						temp=array[j];                 
   						array[j]=array[j+1];
   						array[j+1]=temp;
   					}
   			}
   			
   	
   }
   printf("the sorted list is \n");
   			for(i=0;i<num;i++) 
   			{
   				printf("%d\n",array[i]);             //displaying the final sorted array
   				
   			}
	
	return 0;
}

	
	
	
