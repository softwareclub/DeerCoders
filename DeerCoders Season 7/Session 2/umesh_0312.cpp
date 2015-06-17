#include <stdio.h>
#include <conio.h>

int main()
{
    int marks[50] = {43,65,51,27,79,11,56,61,52,9,25,36,7,49,55,63,74,81,49,37,40,49,16,75,87,91,33,24,58,78,65,56,76,67,45,54,35,63,12,21,73,49,51,19,39,49,68,93,85,59};
    int i, count=0;

    //to count 0-9
    for(i=0;i<50;i++)
        {
            if(marks[i]<=9)
            count++;
        }
    printf ("The number of students belonging to (0-9) are %d", count);
    printf ("\n");
    count = 0;

    //to count 10-19
    for(i=0;i<50;i++)
        {
            if(marks[i]>=10 && marks[i]<20)
            count++;
        }
    printf ("The number of students belonging to (10-19) are %d", count);
    printf ("\n");
    count = 0;

    //to count 20-29
    for(i=0;i<50;i++)
        {
            if(marks[i]>=20 && marks[i]<30)
            count++;
        }
    printf ("The number of students belonging to (20-29) are %d", count);
    printf ("\n");
    count = 0;

    //to count 30-39
    for(i=0;i<50;i++)
        {
            if(marks[i]>=30 && marks[i]<40)
            count++;
        }
    printf ("The number of students belonging to (30-39) are %d", count);
    printf ("\n");
    count = 0;

    //to count 40-49
    for(i=0;i<50;i++)
        {
            if(marks[i]>=40 && marks[i]<50)
            count++;
        }
    printf ("The number of students belonging to (40-49) are %d", count);
    printf ("\n");
    count = 0;

    //to count 50-59
    for(i=0;i<50;i++)
        {
            if(marks[i]>=50 && marks[i]<60)
            count++;
        }
    printf ("The number of students belonging to (50-59) are %d", count);
    printf ("\n");
    count = 0;

    //to count 60-69
    for(i=0;i<50;i++)
        {
            if(marks[i]>=60 && marks[i]<70)
            count++;
        }
    printf ("The number of students belonging to (60-69) are %d", count);
    printf ("\n");
    count = 0;

    //to count 70-79
    for(i=0;i<50;i++)
        {
            if(marks[i]>=70 && marks[i]<80)
            count++;
        }
    printf ("The number of students belonging to (70-79) are %d", count);
    printf ("\n");
    count = 0;

    //to count 80-89
    for(i=0;i<50;i++)
        {
            if(marks[i]>=80 && marks[i]<90)
            count++;
        }
    printf ("The number of students belonging to (80-89) are %d", count);
    printf ("\n");
    count = 0;

    //to count 90-100
    for(i=0;i<50;i++)
        {
            if(marks[i]>=90 && marks[i]<=100)
            count++;
        }
    printf ("The number of students belonging to (90-100) are %d", count);
    printf ("\n");
    count = 0;
}
