#include <stdio.h>
#define MAXSIZE 10
int main()
{
   int array[MAXSIZE];
    int i, j, num, temp;
    printf("Enter the size of array\n");//required array size
    scanf("%d", &num);
    printf("Enter the required numbers\n");//requred numbers to be checked

    for (i=0;i<num;i++)

    {
        scanf("%d",&array[i]);
    }
    for (i=0;i<num;i++)
    {
        for (j=0;j<(num-i-1);j++)
        {
            if (array[j]>array[j+1])//sorting the numbers
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    	printf("The 2nd largest no is %d\n",array[num - 2]);//displaying 2nd largest number
        printf("The 2nd smallest no is %d\n",array[1]);//displaying 2nd smallest number
}
