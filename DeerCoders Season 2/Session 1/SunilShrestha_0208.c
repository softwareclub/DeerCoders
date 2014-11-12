#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num,y[50], i, j=0,m, n, x, temp;
	int counter=1, check;
	srand(time(NULL));//creating different random numbers 
		
	do{
		x=rand();
	//	to find number between 10 and 40;
		num=x%40;
		if(num>=10){
		//	printf("%d ", num);
		//if(num>=10&&num<=40)
		//{
			y[j]=num;
			j++;
			i++;
		//	printf("%d\n", y[i]);
	//	printf("%d  ", y[j]);
	//	}
	
		}
		
	}	
	while(i!=50);
	printf("Sample Output\n\n");
	printf("Random Numbers\n");
		for(j=0; j<50; j++){
		printf("%d ",y[j]);
	}
					//sorting the random numbers
					printf("  \n\n\nSorted Random Numbers\n\n\n");
					for(m=0; m<50; m++){
						for(n=0; n<50-m; n++){
							//swapping the numbers
							if(y[n]>y[n+1]){
								temp=y[n];
								y[n]=y[n+1];
								y[n+1]=temp;
							}
						}
					}
					for(j=0; j<50; j++){
						printf("%d ",y[j]);
					}
	
						//for finding the frequency
						printf("\n\n\n\nR.N. -->Frequency:\n");
						check=y[0];
					
						
						for(j=0; j<50; j++){
							if(y[j]==y[j+1]){
								counter++;
							//	printf("\n\n%d", counter);
							}else{
								check=y[j+1];
							
								printf("\n\n%d-->%d", y[j], counter);
								counter=1;
							}
							//printf("\n\n%d-->%d", check, counter);
						}
}
