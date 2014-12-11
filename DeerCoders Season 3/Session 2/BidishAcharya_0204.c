#include<stdio.h>
#include<conio.h>
int main()
{
	int i, a[3], y, count=0, j, temp[4], s, b, count1=0, u;
	printf("Enter the choice 3 (for 3 digit) or 4 (for 4 digit): ");
	scanf("%d", &u);
	if(u==3)
	{
	for(i=100; i<999; i++)
	{
		a[0] = i / 100;
		y = i % 100;
		a[1] = y / 10;
		a[2] = y % 10;
		if (a[0] == a[1] && a[0] != a[2] || a[0] == a[2] && a[0] != a[1] || a[1] == a[2] && a[1] != a[0])
		{
			count++;
			printf("%d\n", i);
		}
}
	printf("Repeated numbers having same two digits in different position: %d", count);
}
else
{
	for(j=1000; j<9999; j++)
	{
		temp[0] = j / 1000;
		s = j % 1000;
		temp[1] = s / 100;
		int b = s%100;
		temp[2] = b / 10;
		temp[3] = b % 10;
		if (temp[0] == temp[1] && temp[0] != temp[2] && temp[0] != temp[3] || temp[0] == temp[2] && temp[0] != temp[1] && temp[0] != temp[3] || temp[0] == temp[3] && temp[0] != temp[1] && temp[0] != temp[2] || temp[1] == temp[2] && temp[1] != temp[0] && temp[1] != temp[3] || temp[1] == temp[3] && temp[1] != temp[0] && temp[1] != temp[2] || temp[2] == temp[3] && temp[2] != temp[1] && temp[2] != temp[0] )
		{
			count1++;
			printf("%d\n", j);
		}
}
	printf("Repeated numbers having same two digits in different position: %d", count1);
}
getch();
}
