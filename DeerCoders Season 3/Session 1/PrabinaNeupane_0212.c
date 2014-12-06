#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	int i,count=0, times=0, h, e, l, o, space;
	
    puts("Enter a string:");
    gets(s1); 
    //count the number of character
    while (s1[count] != '\0')
    {
        count++;
    }
    // count the number of hello in string
    for (i = 0; i <= count - 5; i++)
    {
        h =(s1[i] == 'h' || s1[i] == 'H');
        e =(s1[i + 1] == 'e' || s1[i + 1] == 'E');
        l =(s1[i + 2] == 'l'|| s1[i + 2] == 'L');
        l =(s1[i + 3] == 'l'|| s1[i + 3] == 'L');
        o =(s1[i + 4] == 'o'|| s1[i + 4] == 'O');
        space =(s1[i + 5] == ' ' || s1[i + 5] == '\0');
        if ((h && e && l && l && o &&space) == 1)
            times++;
            
    }
    printf("the frequency of hello is %d", times);
    
} // the program can only count the number of hello in the string.
