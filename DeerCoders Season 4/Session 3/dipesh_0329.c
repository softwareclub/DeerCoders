#include<stdio.h>
#define MAX 8
main()

{
	int a[MAX]={0,0,0,0,1,1,1,1},b[MAX]={0,0,1,1,0,0,1,1}, c[MAX]={0,1,0,1,0,1,0,1}; 
	//Initializing the values of different varibles needed to evaluate the function
	int d[MAX],i,f[MAX],e[MAX],function_value[MAX];
	
	for(i=0;i<MAX;i++) //loop to evaluate the function 
	{
		d[i]=a[i]+b[i]; //carrying out operation (a+b)
		if(d[i]==2||d[i]==1) //Checking to change the decimal addition to binary
		{
			d[i]=1;//Since 1+1=1 in binary we need to change 1+1=2(in decimal) to 1
		}
		else
		{
			d[i]=0;
		}
        e[i]=d[i]*c[i]; //Carrying out operation ((a+b).c)
	    if(e[i]==a[i]) //Using the property of X-OR gate to carry out operation (((a+b).c)X-OR a)
	    {
	    	f[i]=0;
		}
		else
		{
			f[i]=1;
		}
		if(f[i]==0)//We need to complement the to get final result so changing 1 to 0 and 0 to 1
		{
			function_value[i]=1;
		}
		else
		{
			function_value[i]=0;
		}
		
	}
	printf("a\t\tb\t\tc\t\t\tF=(((a+b).c)XORa)'\n");//formatting to print in tabular form
	for(i=0;i<MAX;i++)//for loop to print the result
	{
	 printf("%d\t\t\%d\t\t%d\t\t\t%d\n",a[i],b[i],c[i],function_value[i]);//formatting to print in tabular form
	 	
	}
}
