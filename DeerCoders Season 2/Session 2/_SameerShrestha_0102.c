/*A PROGRAM TO CALCULATE THE NUMBER IN WORDS 
*IT CALUCATES RIGHT VALUE FOR ONLY 2 DIGITS*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void printOnesNumber(int);
void printTwosNumber(int);
void printHundredsNum(int);
void printThousandNum(int);
void printLakhNum(int);
int* parseString(int);

int *arrNum[10];
int i,temp,length,value;

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    parseString(num);

     int index=length-1;
     /********************************************************/
     printf("\nThe Number in words is : \n"); 
         do
         {
             for(i=index;i>=0;i--)
             {
                 value = arrNum[i];          
                 switch(length)
                 {
                       case 1:
                            printOnesNumber(value);
                            break;
                       case 2:
                            printTwosNumber(value);
                            break;
                       case 3:
                            printHundredsNum(value);
                            break;
                       case 4:
                            printThousandNum(value);
                            break;
                       case 6:
                            printLakhNum(value);
                            break;
                        default:
                            break;
                 } 
                 --index;
                 --length;
             } 
         }while(index!=0);             
    getch();
    return 0;
}

int* parseString(int num)
{
     i=0;
     while(num!=0)
     {
            temp = num%10;
            arrNum[i]=temp;
            num = num/10;
            length=++i;           
     }
     return arrNum;
}

void printHundredsNum(int num)
{
     printOnesNumber(value);
     printf(" Hundred and ");
     printTwosNumber(value);
}   

void printThousandNum(int value)
{
     printOnesNumber(value);
     printf(" Thousand and ");
     printOnesNumber(value);
     printf(" Hundred and ");
     printTwosNumber(value);
}   
    
void printLakhNum(int value)
{
     printOnesNumber(value);
     printf(" Lakh ");
     printf(" Thousand and ");
     printOnesNumber(value);
     printf(" Hundred and ");
     printTwosNumber(value);
} 
     
void printTwosNumber(int num)
{
     switch(num)
     {
                case 2:
                     printf("Twenty ");
                     break;
                case 3:
                     printf("Thirty ");
                     break;
                case 4:
                     printf("Fourty ");
                     break;
                case 5:
                     printf("Fifty ");
                     break;
                case 6:
                     printf("Sixty ");
                     break;
                case 7:
                     printf("Seventy ");
                     break;
                case 8:
                     printf("Eighty ");
                     break;
                case 9:
                     printf("Ninety ");
                     break; 
     }                   
}

void printOnesNumber(int num)
{
     switch(num)
     {
                case 0:
                     printf("Zero");
                     break;
                case 1:
                     printf("One");
                     break;
                case 2:
                     printf("Two");
                     break;
                case 3:
                     printf("Three");
                     break;
                case 4:
                     printf("Four");
                     break;
                case 5:
                     printf("Five");
                     break;
                case 6:
                     printf("Six");
                     break;
                case 7:
                     printf("Seven");
                     break;
                case 8:
                     printf("Eight");
                     break;
                case 9:
                     printf("Nine");
                     break; 
     }                   
}
