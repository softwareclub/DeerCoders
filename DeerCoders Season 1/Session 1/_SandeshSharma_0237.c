#include<stdio.h>
#include<conio.h>
int main()
{
    int first_dig,second_dig,num,sum=0,use_num;
    for(num=10;num<=99;num++)
    {
       
        use_num=num;// Assigns the value  num to use_num so that value of num is not affected for further use                  
        second_dig= use_num%10;//assigns the second digit of the number to the variable second_dig
        use_num=use_num/10;//gives the first digit of the two digit number
        first_dig=use_num;// //assigns the first digit of the number to the variable first_dig
        if(first_dig-second_dig==4)// checks if the first digit is larger than second by 4
        {
           sum=first_dig+second_dig;
           if(num/sum==7&&num%sum==0)//checks if num is exactly divisible by sum of its two digit by 7
           {
              printf("The correct answer is %d",num);//prints the number that satisfies the above two if conditions              
           }
        }
    }    
    getch();// holds the console screen until it gets some character
}
           
           
        
        
