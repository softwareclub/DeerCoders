#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int i,j, a[50],b[50],count,temp;
      srand(time(NULL));
    for(i=0;i<50;i++)
    {
  
    a[i]  = rand()%40 + 10;
    printf("%d\t",a[i]);
    b[i] = a[i];
}
for(i=0; i<50; i++)
{
    count = 1;
    for(j=i+1; j<50 ; j++)
    {
      
           
              if(a[i] == b[j])
              count++;
   }
            
            printf("%d --> %d\n", a[i],count);
                    
                    
}


            
            
        
    
                       
    
    
    getch();
}
