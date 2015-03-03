#include<stdio.h>
main()
{
	//declaring and assigning the value of array a,b,c
	int a[]={0,0,0,0,1,1,1,1};
	int b[]={0,0,1,1,0,0,1,1};
	int c[]={0,1,0,1,0,1,0,1};
	//declaring variable i and array sum, prod, x_or
	int i,sum[8],prod[8],x_or[8];
	//printing the title of truth table
	printf("a\tb \tc \tf\n");
			 
 	for (i=0; i<8; i++)
 	{
 		//checking the sum of a and b and assigning the value of sum accordingly 
 		if (a[i]+b[i]==1||a[i]+b[i]==2)
 		{
 			sum[i]=1;
		 }
		 else
		 {
		 	sum[i]=0;
		 }
		 //checking the product of sum and c and assigning the value of prod accordingly 
		if (sum[i]*c[i]==1)
 		{
 			prod[i]=1;
		 }	
		 else
		 {
		 	prod[i]=0;
		 }	 
		 //checking if the prod is equal to a and assigning the compliment values
		 if (prod[i]==a[i])
 		{
 			x_or[i]=0;
		 }
		 else
		 {
		 	x_or[i]=1;
		 }
		 if (x_or[i]==0)
		 {
		 	x_or[i]=1;
		 }
		 else
		 {
		 	x_or[i]=0;
		 }
	 }
	 //displaying the truth table
	 	for (i=0; i<8; i++)
 	{
	 printf("%d\t%d\t%d\t%d\n",a[i],b[i],c[i],x_or[i]);
	}
}
