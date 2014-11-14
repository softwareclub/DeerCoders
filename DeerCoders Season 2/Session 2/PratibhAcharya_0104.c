#include <stdio.h>
#include <conio.h>
int compare();
int unit();
int i=0;
int main()
{
    int num;
    int separate_number;

    int arr[7];
    printf("Enter the number\n ");
    scanf("%d",&num);
    while(num!=0){
        separate_number = num%10;
        num = num/10;
        arr[i] = separate_number;
        printf("%d\n",arr[i]);
        i=i+1;
    }
    compare(arr);
    //unit(arr);
    return 0;
}

int compare(int arr[]){

    for(i = 0; i< 7;i++){
        if(arr[i]==1){
            printf("One");
            unit(arr);
        }
        else if(arr[i]==2){
            printf("Two");
        }
        else if(arr[i]==3){
            printf("Three");
        }
        else if(arr[i]==4){
            printf("Four");
        }
        else if(arr[i]==5){
            printf("Five");
        }
        else if(arr[i]==6){
            printf("Six");
        }
        else if(arr[i]==7){
            printf("Seven");
        }
        else if(arr[i]==8){
            printf("Eight");
        }
        else if(arr[i]==9){
            printf("Nine");
        }
        else if(arr[i]==10){
            printf("Ten");
        }
    }
}

int unit(int arr[]){
    int assign;

        if(arr[i]>0 && arr[i]<3){
            assign = arr[i];
            printf("Thousand");
        }



}




