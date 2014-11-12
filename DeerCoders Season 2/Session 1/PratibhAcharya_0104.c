#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main(){

    int i,j;
    int random_number[50];
    int min_value = 10;
    int max_value = 40;
    int count = 0;
    int temp;
    srand(time(NULL));
    for(i=1;i<=50;i++){

        random_number[i] = max_value + rand() / (RAND_MAX / (min_value - max_value + 1) + 1);
        printf("%d\t",random_number[i]);

        // calculate frequency

        for(j=0;j<50;j++){
            // Bubble sort
            /*if(random_number[i]== random_number[i+1]){

                temp = random_number[j];
                random_number[j]= random_number[j+1];
                random_number[j+1] = random_number[j];

            }
            printf("%d",random_number[j]);
            */

        }

        //bubble sort


    }

    printf("\n");
    return 0;
}
