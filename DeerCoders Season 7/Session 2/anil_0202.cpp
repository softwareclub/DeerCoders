#include<stdio.h>
#include<conio.h>
#define SIZE 50
main()
{
	int array[SIZE]={43 ,65, 51, 27, 79, 11, 56, 61, 52, 9, 25, 36, 7, 49, 55, 63, 74, 81, 49, 37, 40 ,49, 16, 75, 87, 91, 33, 24, 58, 78, 65, 56, 76, 67, 45, 54, 35, 63, 12, 21,
	73, 49, 51, 19, 39, 49, 68, 93, 85, 59};//marks obtained by the students
	int count[10]={0,0,0,0,0,0,0,0,0,0};//setting count to 0
	for(int i=0;i<=SIZE;i++)
	{
		if(array[i]>=0 && array[i]<=9)//if statement that checks the first marks
		{
			count[0]++;//increment the value of count by 1
		}
			if(array[i]>=10 && array[i]<=19)
		{
			count[1]++;
		}
			if(array[i]>=20 && array[i]<=29)
		{
			count[2]++;
		}
			if(array[i]>=30 && array[i]<=39)
		{
			count[3]++;
		}
			if(array[i]>=40 && array[i]<=49)
		{
			count[4]++;
		}
		
		if(array[i]>=50 && array[i]<=59)
		{
		  count[5]++;
	    } 
			if(array[i]>=60 && array[i]<=69)
		{
			count[6]++;
		}
			if(array[i]>=70 && array[i]<=79)
		{
			count[7]++;
		}
			if(array[i]>=80 && array[i]<=89)
		{
			count[8]++;
		}
			if(array[i]>=90 && array[i]<=99)
		{
			count[9]++;
		}		
	}
	int i;
	for(i=0;i<10;i++){
		int inc=10;//setting value of inc to 10
		printf("the numbers from %d-%d is %d\n",inc*i,inc*i+9,count[i]);
	}
	

}



