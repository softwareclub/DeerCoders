#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	srand(time(NULL));
	int num,i,mo;
	for(i=0;i<50;i++)
	{
	num=rand();
	mo=num%100;
	while(mo>=10&&mo<=40)
	{
		printf("%d",mo);
	}
   }
	return 0;
    
}
