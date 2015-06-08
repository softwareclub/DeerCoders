#include<stdio.h>
#include<conio.h>

//declaring these variables as global variable to store and display the counts. It is used in both functions.
int range0_9=0, range10_19=0, range20_29=0, range30_39=0, range40_49=0, range50_59=0, range60_69=0, range70_79=0, range80_89=0, range90_99=0;

void filter(int marksArray[50]);    //function declaration
void display();     //function declaration

int main()
{
    //initialising 50 numbers in array
    int marksArray[50]={43,65,51,27,79,11,56,61,52,9,25,36,7,49,55,63,74,81,49,37,40,49,16,75,87,91,33,24,58,78,65,56,76,67,45,54,35,63,12,21,73,49,51,19,39,49,68,93,85,59};

    filter(marksArray);     //calling function array which filters and counts the numbers in array
    display();         //calling function which displays the counts of numbers

}

//body of function which filters the number less than 50 and greater than 50, then counts the number and store in respective variables.
void filter(int marksArray[50])
{
    int i;
    for (i=0; i<50; i++){
        if (marksArray[i]<50){                              //for less than 50
            if (marksArray[i]>=0 && marksArray[i]<10){
                range0_9++;
            }else{
                if (marksArray[i]>=10 && marksArray[i]<20){
                    range10_19++;
                }else{
                    if (marksArray[i]>=20 && marksArray[i]<30){
                        range20_29++;
                    }else{
                        if (marksArray[i]>=30 && marksArray[i]<40){
                            range30_39++;
                        }else{
                            if (marksArray[i]>=40 && marksArray[i]<50){
                                range40_49++;
                            }
                        }
                    }
                }
            }
        }
        if (marksArray[i]>50){                                            //for more than 50
            if (marksArray[i]>=50 && marksArray[i]<60){
                range50_59++;
            }else{
                if (marksArray[i]>=60 && marksArray[i]<70){
                    range60_69++;
                }else{
                    if (marksArray[i]>=70 && marksArray[i]<80){
                        range70_79++;
                    }else{
                        if (marksArray[i]>=80 && marksArray[i]<90){
                            range80_89++;
                        }else{
                            if (marksArray[i]>=90 && marksArray[i]<100){
                                range90_99++;
                            }
                        }
                    }
                }
            }
        }
    }
}

//body of funcion which displays the counts of numbers.
void display()
{
    printf("Count from 0 to 9: %d\n", range0_9);
    printf("Count from 10 to 19: %d\n", range10_19);
    printf("Count from 20 to 29: %d\n", range20_29);
    printf("Count from 30 to 39: %d\n", range30_39);
    printf("Count from 40 to 49: %d\n", range40_49);
    printf("Count from 50 to 59: %d\n", range50_59);
    printf("Count from 60 to 69: %d\n", range60_69);
    printf("Count from 70 to 79: %d\n", range70_79);
    printf("Count from 80 to 89: %d\n", range80_89);
    printf("Count from 90 to 99: %d\n", range90_99);
}
