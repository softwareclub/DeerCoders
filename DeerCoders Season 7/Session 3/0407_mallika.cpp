#include<stdio.h>
int main()
{
    int i,sum=0,count=0,temp,j,n;
    printf("The three digit numbers whose sum is 6 are:\n");
    for(i=0;i<1000;i++)//runs the loop 1000 times taking values of i from 000 to 999
    {
    	temp=i;
        for(j=0;j<3;j++)
        {
            n=temp%10;
            sum=sum+n;
            temp=temp/10;
        }
        if(sum==6)
        {
            printf("%d\n",i);
            count++;
        }
        sum=0;
    }
    temp=1;
    printf("The total number of numbers whose sum of digits is equal to 6 is:%d",count);
}
