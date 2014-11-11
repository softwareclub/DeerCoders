#include<stdio.h>
#include<conio.h>
main()
{
    int rem,i;
    float quo;
    printf("The list is as follows :--->\n");
    for(i=10; i<99; i++)
    {
        rem=i%10;
        quo=i/10;


        if(i/(quo+rem)==7.0 && quo-rem==4) // logic
        {
          printf("%d\n",i);
        }
    }
   getch();
}

