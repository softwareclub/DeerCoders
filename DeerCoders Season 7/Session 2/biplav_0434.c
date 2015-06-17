/*Program to count the number of students belonging to each marks group*/
#include<stdio.h>
#include<conio.h>
int main()
{
	//declaring required variabes
	int marks[50]={43,65,51,27,79,11,56,61,52,9,25,36,07,49,55,63,74,81,49,37,40,49,16,75,87,91,33,24,58,78,65,56,76,67,45,54,35,63,12,21,73,49,51,19,39,49,68,93,85,59},i,group1=0,group2=0,group3=0,group4=0,group5=0,group6=0,group7=0,group8=0,group9=0,group10=0;
	
	//starting a for loop to check the marks and increase the count of associated group as required
	for(i-0;i<50;i++)
	{
		if(marks[i]>=0&&marks[i]<=9)
			group1++;
		else if(marks[i]>=10&&marks[i]<=19)
			group2++;
		else if(marks[i]>=20&&marks[i]<=29)
			group3++;
		else if(marks[i]>=30&&marks[i]<=39)
			group4++;
		else if(marks[i]>=40&&marks[i]<=49)
			group5++;
		else if(marks[i]>=50&&marks[i]<=59)
			group6++;
		else if(marks[i]>=60&&marks[i]<=69)
			group7++;
		else if(marks[i]>=70&&marks[i]<=79)	
			group8++;
		else if(marks[i]>=80&&marks[i]<=89)
			group9++;
		else
			group10++;
	}
	
	//Printing the count of students of each marks group
	printf("The number of students belonging to marks group 0-9 is %d\n",group1);
	printf("The number of students belonging to marks group 10-19 is %d\n",group2);
	printf("The number of students belonging to marks group 20-29 is %d\n",group3);
	printf("The number of students belonging to marks group 30-39 is %d\n",group4);
	printf("The number of students belonging to marks group 40-49 is %d\n",group5);
	printf("The number of students belonging to marks group 50-59 is %d\n",group6);
	printf("The number of students belonging to marks group 60-69 is %d\n",group7);
	printf("The number of students belonging to marks group 70-79 is %d\n",group8);
	printf("The number of students belonging to marks group 80-89 is %d\n",group9);
	printf("The number of students belonging to marks group 90-100 is %d\n",group10);
	getch();
}
