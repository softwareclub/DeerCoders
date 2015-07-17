#include <conio.h>
#include <stdio.h>

int main()
{
    int first, second, third;   //First denotes hundredth place, second denotes tens place, third denotes ones place
    int counts=0;

    printf("Those digits are: \n\n");
    for(first=0; first<=6; first++)    //this loop puts number from 0 to 6 in hundredth place
    {
        for(second=0; first + second<=6; second++)  //this loop puts number from 0 to 6 in tens place excluding numbers, first + second > 6
        {
            for(third=0; first + second + third<=6; third++)     //this loop puts number from 0 to 6 in ones place excluding numbers, first + second + third > 6
            {
                if(first + second + third == 6) //checks for the condition
                {
                    printf("%d%d%d\t",first,second,third); // prints the required 3-digits number
                    counts++;    // denotes total number of 3-digits whose sum is 6
                }
            }
        }
    }
    printf("\n\n Total number of such 3-digits whose sum is 6 is: %d",counts);    // prints total number of those digits
}
