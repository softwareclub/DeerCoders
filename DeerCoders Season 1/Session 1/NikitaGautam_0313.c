#include<stdio.h>            // includes the header file standard input output
int main () 
{
    int i,temp,digit1,digit2,sum; // assigns the variables as integer
    float div; // assigns the variable as floating point number

   for(i=10;i<=99;i++)
    {
        temp = i;             // stores the value of i in an temporary variable temp
	    digit1= i % 10;       // digit1 stores the remainder of i
        temp = temp/10;       // divides the number by 10
        digit2 = temp;        // digit2 stores the remaining digit of the integer
        sum = digit1 + digit2;          // sum the digits
        div = (float)i/(float)sum;     // divides the given integer by its digit sum
        if ((digit2 == digit1+4) && (div == 7))     // verifies the condition
        {
                 printf("%d\t",i);       //prints the required output
        }
    }
    return 0;   // returns 0 to main function

}

