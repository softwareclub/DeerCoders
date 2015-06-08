#include<stdio.h>
#include<conio.h>
int main ()
{
    int n,p;
    int i,a[10],m[50]={43,65,51,27,79,11,56,61,52,9,25,36,7,49,55,63,74,81,49,37,40,49,16,75,87,91,33,24,58,78,65,56,76,67,45,54,35,63,12,21,73,49,51,19,39,49,68,93,85,59};//m holds the marks of 50 students,a is the counter
    for(i=0;i<10;i++)
    {
         a[i]=0;//sets the value of each counter 0
    }
    for(i=0;i<50;i++)//runs the loop 50 times checking marks of 50 students
    {
        if(m[i]>=0&&m[i]<=100)//checks if the marks belongs to the range 0-100,proceeding if the condition meets
        {
            if(m[i]>=0&&m[i]<=9)
            {
                a[0]++;//counter increases if the conditions meet
            }
            if(m[i]>=10&&m[i]<=19)
            {
                a[1]++;
            }
            if(m[i]>=20&&m[i]<=29)
            {
                a[2]++;
            }
            if(m[i]>=30&&m[i]<=39)
            {
                a[3]++;
            }
            if(m[i]>=40&&m[i]<=49)
            {
                a[4]++;
            }
            if(m[i]>=50&&m[i]<=59)
            {
                a[5]++;
            }
            if(m[i]>=60&&m[i]<=69)
            {
                a[6]++;
            }
            if(m[i]>=70&&m[i]<=79)
            {
                a[7]++;
            }
            if(m[i]>=80&&m[i]<=89)
            {
                a[8]++;
            }
            if(m[i]>=90&&m[i]<=100)
            {
                a[9]++;
            }
        }
    else
        {
            printf("invalid input");//if it does not belong to the range 0-100
        }
    }
    printf("Marks\t\tFrequency\n");//prints the titles
    for(i=0;i<8;i++)
    {
        p=i*10;//to
        n=i*10+9;
        printf("%d-%d\t\t%d\n",p,n,a[i]);//prints range and the frequency
        p=0,n=0;
    }
    printf("90-100\t\t%d",a[9]);//prints the final range and frequency
}


