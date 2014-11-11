//Program to find out the list of two digit numbers such that when the number is divided by the sum of its digits the quotient is 7 and also the first digit is larger than second digit by 4.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;                      // number to check for the given conditions
    int first;                    // first digit of number
    int second;                   // second digit of number
    for (num=40;num<=95;num+=11)  // number is assigned 40 as it is the first number that meets the second condition and it is increased by 11 such that second condition holds
    {
         first = num/10;
         second = num%10;
         if((float)(num /(first+second))==7.0)
             printf("%d\n",num);
    } // end for
    getch();
} // end main
