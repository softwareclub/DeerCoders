#include<stdio.h>
main()
{
	int a[8]={0,0,0,0,1,1,1,1},b[8]={0,0,1,1,0,0,1,1},c[8]={0,1,0,1,0,1,0,1}; //Delaring array of 8 values
	int result,f,i,step;//Declaring variable named result,f,i and step
	printf("Truth Table of logical gates (a+b) are\n");
	printf("Table(a)\t\tTable(b)\t\tTable(c)\tResult\n");
	for(i=0; i<8; i++)
	{
		step=a[i]+b[i];
	if(step==2)
			step=1;
			f=(step*c[i]);
	if(f==a[i])
			result=1;
	else
			result=0;
			printf("%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\n",a[i],b[i],c[i],result);
	}
}
		
	
