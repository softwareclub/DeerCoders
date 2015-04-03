#include<stdio.h>
#include<conio.h>


int main()
{
  int i, j, flag,a[25];
  
  
  for(i=10; i<100; ++i)
  {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          flag=1;
           break;
        }
        
      }
      
     
	 int k=0;
	 if(flag==0){
	  
        printf("%d\t ",i);
        a[k]=i;
        
       printf("the number stored in array is %d\n",a[k]);
       
       k++;
        
        }
        
      }
      
      
      
  return 0;
}




