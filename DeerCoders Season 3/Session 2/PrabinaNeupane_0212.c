#include<stdio.h>
#include<conio.h>
int main()
{
	int num, a[3], i, temp=0, b[5], count;
	for(num=100; num<=999; num++)
	{
	
	a[0] = (num%10);
	a[1]= (num/10) % 10;
	a[2] = num /100;
	
	if(a[0] == a[1] && a[0] != a[2] || a[0] == a[2] && a[0] != a[1] || a[1] == a[2] && a[1] != a[0])
     	{
     		temp++;
          printf("%d\n", num);
     	}
     	
     }
     
     printf("the 3 digits number having 2 same digits are== %d", temp);
     for(num=1000; num<=9999; num++)
	{
	
	b[0] = (num/ 1000);
	b[1]= (num /100) %10;
	b[2] = (num %100) / 10;
	b[3] = ((num %1000) %100) %10;
	
	
	
	if(b[0] == b[1] && b[0] != b[2] && b[0] != b[3] || b[0] == b[2] && b[0] != b[1] && b[0] != b[3] || b[0] == b[3] && b[0] != b[1] && b[0] != b[2] || b[1] == b[2] && b[1] != b[0] && b[1] != b[3] || b[1] == b[3] && b[1] != b[2] && b[1] != b[0]|| b[2] == b[3] && b[2] != b[1] && b[2] != b[0])
     	{
     		count++;
          printf("%d\n", num);
     	}
 }

     printf ("\n \n the four digit number having 2 same digits are == %d", count);
     
}
