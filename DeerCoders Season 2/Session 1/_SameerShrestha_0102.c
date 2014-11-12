#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i,j,temp;
int array[50]={0};

void printArray(int array[]){
    printf("\n****************************\n");
    for(i=0;i<50;i++)
        printf("%d\t",array[i]);
}
void generateRandomNum(){
    int random;
    /*Initialize a seed*/
    srand(time(NULL));
   /*Save Random Number in Array*/
    for(i=0;i<50;i++){
        random = 10+(rand()%30+1);
        array[i]=random;
    }
    printf("The list of Random Numbers are : \n");
    printArray(array);
    printf("\n\n");

    countFrequency(array);

    sortRandomNum(array);
}

void sortRandomNum(int array[]){
    for(i=0;i<50;i++){
        for(j=0;j<50-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\n***Sorted Array is***\n ");
    printArray(array);
}

void countFrequency(int arr[]){
    int count,key,frequency;
    printf("R.N --> Frequency\n");
    for(i=0;i<50;i++){
        count=0;
        key=arr[i];
        for(j=0;j<50;j++){
            if(key==arr[j]){
                    frequency = count++;
            }
        }
        if(frequency>0)
            printf("\n%d --> %d",key,frequency);
    }
}

int main(){
    generateRandomNum();
    return 0;
}

