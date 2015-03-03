#include<stdio.h>//header file
int main()
{
	
	int a[]={0,0,0,0,1,1,1,1}; //declaration and assigning value of a
	int b[]={0,0,1,1,0,0,1,1}; //declaration and assigning value of b
	int c[]={0,1,0,1,0,1,0,1}; //declaration and assigning value of c
	int i,sum[8],product[8],x_or[8]; //declaration of i,sum and product
	
	printf("a\tb\tc\tf\n"); //printing the title
	
	for(i=0; i<8; i++)  
	 {
	 	if (a[i]+b[i]==1||a[i]+b[i]==2) //checking the sum of a and b and assigning the value 
	 	{
	 		sum[i]=1;
	 	}
	 	else
	 	{
	 	   sum[i]=0;	
	 	}
	    if (sum[i]*c[i]==1) //checking the product of sum and c and assigning the value 
	    {
	    	product[i]=1;
	    }
	    else
	    {
	    	product[i]=0;  
	    }
	    if (product[i]==a[i]) //checking if the product is equal to a and assigning the compliment values
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
	 for (i=0; i<8; i++) //loop for all the values to be printed
	printf("%d\t%d\t%d\t%d\n", a[i],b[i],c[i],x_or[i]); //priting the truth table
return 0;

}
