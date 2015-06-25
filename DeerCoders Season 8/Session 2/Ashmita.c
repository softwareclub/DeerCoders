#include<stdio.h>
#include<conio.h>
#define MAX
main()
{ 
	int i,j,m,n,k;
	int c;                                                               //c is a temp value.
	int A[100],B[100],C[100];
	
	printf("Input the number of elements in first array:\n");           //asking (input) the number of elements in first array from user
	scanf("%d",&m); 
	                                                   //number of elements of 1st array is stored in m
	printf("Input the elements of first array:\n");                   //asking (input) the elements in first array from user
	for(i=0;i<m;i++)
	{
		scanf("%d",&A[i]);                                          //taking input of first array and storing in A
	}
	
	printf("Input the number of elements in second array:\n");    //asking (input) the number of elements in second array from user
	scanf("%d",&n);                                              //number of elements of 2nd array is stored in n
	
	printf("Input the elements of second array:\n");            //asking (input) the elements in second array from user
	for(j=0;j<n;j++)
	{
		scanf("%d",&B[j]);                                    //taking input of second array and storing in B
    }
	
	       for(k=0;k<10;k++)
          	{
		      C[k]= A[i]+B[j];                                    //adding the two arrays and merging them in one
	        }
	           for(i=0;i<10;i++)
	            {
		          for(j=0;j<(9-i);j++)
	            	  {
		            	  if (C[j]>C[j+1])                              //sorting the merged array
			               {
			            	  c=C[j];
			            	  C[j]=C[j+1];
				              C[j+1]=c;
			               }
                      }
	            }  
	               for(i=0;i<10;i++)
	                     {
	                           	printf("%d\n",C[k]);                          //displaying the result of merged array in ascending order
	                     } 
}
