#include<stdio.h>
#include<conio.h>
int main()
{
    int a;                      
    int b;                  
    int c;   
	float x;                
    for (a=40;a<=95;a+=11)
    {
         b = a/10;
         c = a%10;
         x=(float)(a /(b+c));
         
         if( x==7 && b==c+4)
         
        printf("%d\n",a);
    } 
    getch();
} 
