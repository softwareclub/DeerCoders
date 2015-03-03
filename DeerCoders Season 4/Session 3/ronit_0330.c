//Find the truth table of the given function.
//F=Complement of (((a+b).c)[xor]a)
/*
Ronit Pradhan
0330
Section A
Batch 2017
*/
//Created on: 21st January 2015
//

#include<stdio.h>
#define max 8
int main()
{	
	int a[]={0,0,0,0,1,1,1,1}, b[]={0,0,1,1,0,0,1,1}, c[]={0,1,0,1,0,1,0,1}, plus[max], dot[max], xor[max], comp[max],i;
	
		 for(i=0;i<8;i++)
		 {
		 	if(a[i]==1||b[i]==1)
		 	{
		 		plus[i]=1;
		 	}
		 	else
		 	{
		 		plus[i]=0;
		 	}
	
		 	if(plus[i]==0||c[i]==0)
		 	{
		 		dot[i]=0;
		 	}
		 	else
		 	{
		 		dot[i]=1;
		 	}
		 
		 	if(dot[i]==a[i])
		 	{
		 		xor[i]=0;
		 	}
		 	else
		 	{
		 		xor[i]=1;
		 	}
		 	if(xor[i]==1)
		 	{
		 		comp[i]=0;
		 	}
		 	else
		 	{
		 		comp[i]=1;
		 	}
		 }
		 	printf("\t\t\t\tTRUTH TABLE OF: F=Complement of (((a+b).c)[xor]a)\n");
		 	printf("\n|a|\t|b|\t|c|\t|a+b|\t|(a+b).c|\t|(((a+b).c)[xor]a)|\t|Complement of(((a+b).c)[xor]a)|");
			 	for(i=0;i<8;i++)
				 {
		 			printf("\n|%d|\t|%d|\t|%d|\t|%d|\t|%d|\t\t|%d|\t\t\t|%d|",a[i],b[i],c[i],plus[i],dot[i],xor[i],comp[i]);
				 }
			printf ("\n");
}
