#include<stdio.h>
int main()
{
	int i;
int m[8]={0,0,0,0,0,0,0,0}; // casea = 0 ,caseb = 0,casec = 0,cased = 0,casee = 0,casef = 0,caseg = 0,caseh = 0;//initializing the cases
int a[50] = {43,65,51,27,79,11,56,61,52,9,25,36,7,49,55,63,74,81,49,37,40,49,16,75,87,91,33,24,58,78,65,56,76,67,45,54,35,63,12,21,73,49,51,19,39,49,68,93,85,59};
//initializing the array of 50 numbers

for(i=0;i<50;i++);//using for loop to acess the every elements of the array
{
if(a[i]>=0 && a[i]<10)// checking the cases;
{   m[0]++;
	 
	
}
else if(a[i]>=10 && a[i]<19)
{
    m[1]++;
	 
	
}
else if(a[i]>=20 && a[i]<30)
{   m[2]++;
	 
	
}
else if (a[i]>=30 && a[i]<40)
{   m[3]++;
	 
	
}
else if (a[i]>=40 && a[i]<50)
{   m[4]++;
	 
	
}
else if(a[i]>=50 && a[i]<60)
{
	m[5]++;
	 
	
}
else if(a[i]>=60 && a[i]<70)
{
	m[6]++;
	 
	
	
}
else if(a[i]>=80 && a[i]<90)
{
	m[7]++;
	 
	
	
}
else if(a[i]>=90 && a[i]<=100)
{
m[8]++;	 
	
	
}

}
printf("count according to group of marks");
for(i=0;i<9;i++)
{
	printf("%d0-%d9\t%d\n",i,i,a[i]);
}
printf("90-100\t%d\n",a[9]);

	
}

