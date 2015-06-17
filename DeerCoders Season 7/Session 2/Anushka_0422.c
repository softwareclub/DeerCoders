#include<stdio.h>
main ()
{
	int count[10]={0,0,0,0,0,0,0,0,0,0}, i, mark[50]={43,65,51,27,79,11,56,61,52,9,25,36,07,49,55,63,74,81,49,37,40,49,16,75,87,91,33,24,58,78,65,56,76,67,45,54,35,63,12,21,73,49,51,19,39,49,68,93,85,59};//declaring variavles 
	for (i=0;i<50;i++) // loop to divide groups
	{
		if (mark[i]>=0 && mark[i]<=9)
		{
			count[0]=count[0]+1;
		}
		else if (mark[i]>=10 && mark[i]<=19)
		{
			count[1]=count[1]+1;
		}
		else if (mark[i]>=20 && mark[i]<=29)
		{
			count[2]=count[2]+1;
		}
		else if (mark[i]>=30 && mark[i]<=39)
		{
			count[3]=count[3]+1;
		}
		else if (mark[i]>=40 && mark[i]<=49)
		{
			count[4]=count[4]+1;
		}
		else if (mark[i]>=50 && mark[i]<=59)
		{
			count[5]=count[5]+1;
		}
		else if (mark[i]>=60 && mark[i]<=69)
		{
			count[6]=count[6]+1;
		}
		else if (mark[i]>=70 && mark[i]<=79)
		{
			count[7]=count[7]+1;
		}
		else if (mark[i]>=80 && mark[i]<=89)
		{
			count[8]=count[8]+1;
		}
		else
		{
			count[9]=count[9]+1;
		}
	}
	printf("Count according to group of marks: \nMarks\tNumber\n");
	for (i=0;i<9;i++) //loop to display count in groups
	{
		printf("%d0-%d9\t%d\n",i,i,count[i]);
	}
	printf("90-100\t%d\n",count[9]);
}
