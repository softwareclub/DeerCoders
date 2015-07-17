#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k, count=0;       //declaration

    for (i=0; i<7; i++){        //loop for first digit
        for (j=0; j<7; j++){        //loop for second digit
            for (k=0; k<7; k++){        //loop for third digit
                if (i+j+k==6){             //checking if the sum of first, second, third digit is 6
                    printf("%d%d%d\t", i, j, k);    //print the value
                    count++;                        //incrementing the count
                }
            }
        }
    }
    printf("\nThe count is %d.", count);        //print the count
    getch();
}
