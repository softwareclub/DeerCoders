#include<stdio.h>
#include<time.h>

int main(){
	
	int i ,j = 0,k = 0;
	int num;
	int rand_array[50];
	int count = 0;
	int temp;
	int freq;
	
	
	srand(time(NULL));
	
	//a. Generate random number and listing between 10 and 40
	for(i =0;i < 40;i++)
	{
		num = rand()%41;
		
		if(num >= 10)
		{
			rand_array[j] = num;
			printf("%d ",num);
			j++;
			count++;
				
		}
		
	}
	
	
	//b. frequency 
	
	
	for(i = 0 ;i < count; i++)
	{
		temp = rand_array[0];	
		freq = 0;
				
		for(j = 0 ;j < count - i; j++)
		{
			
			if(temp == rand_array[j])
			{
				
				freq++;
				
			}
			
			if(rand_array[j] != temp)
			{
				rand_array[k] = rand_array[j];
				k++;
			}
					
		}
		
	
		
		printf("\nfrequency of %d is %d\n", temp , freq);
	}
	//c. sorting  in ascending order
	
	for(i = 1; i < count ;i++)
	{
		
		for(j = 0; j < count-i ;j++)
		{
			if(rand_array[j] > rand_array[j+1])
			{
				temp = rand_array[j];
				rand_array[j] = rand_array[j+1];
				rand_array[j+1] = temp;
			
			}
			
		}
		
	}
	
	printf("\nSorting in ascending order\n");
	for(i = 0 ; i < count; i++)
	{
		printf("%d ",rand_array[i]);
	}
	
	
	return 0;
}
