#include<stdio.h>//opening header file
main()//main function
{
	int a[8]={0,0,0,0,1,1,1,1},b[8]={0,0,1,1,0,0,1,1},c[8]={0,1,0,1,0,1,0,1},i, step, result;//declaring variables and creating arrays for a,b and c
	printf("\ta\tb\tc\t ((a+b).c XOR a)'\n");//printing the titles
	for(i=0;i<8;i++)//loop for accessing the array values
	{
		step=a[i]+b[i];//first step i.e. (a+b)
		if(step==2)//for case 1 + 1 = 1
		{
			step=1;
		}
		if(step*c[i]==a[i])//for XOR calculation
		{	
				result = 1;	//The result from XOR calc is actually 0 but final result is the compliment, so, 0 compliment == 1
		}
		else//for XOR calculation
		{
				result = 0;	//The result from XOR calc is actually 1 but final result is the compliment, so, 1 compliment == 0
		}
		printf("\t%d\t%d\t%d\t\t%d\n\n",a[i],b[i],c[i],result);//Printing the results for each test value
	}
}

