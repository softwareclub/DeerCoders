#include<stdio.h>
#include<conio.h>
#define count 10        //assigning maximum value of count =10
#define num 50          //assigning maximum value of num=50

int main()
{

    int i,inc;
    int group[count]={0,0,0,0,0,0,0,0,0,0};             //initializing the value of group
    //giving input (marks) of 50 students
    int marks[num]={43,65,51,27,79,11,56,61,52,9,25,36,7,49,55,63,74,81,49,37,40,49,16,75,87,91,33,24,58,78,65,56,76,67,45,54,35,63,12,21,73,49,51,19,39,49,68,93,85,59};
    for(i=0;i<50;i++)
    {
        ++group[(int)(marks[i]/10)];      //increasing the count of each group
    }
    for(i=0;i<count;i++)
    {
        inc=10;
        printf("the total number between %d and %d is %d\n",i*inc,(i*inc)+9,group[i]);        //printing the total count of each group

    }
}
