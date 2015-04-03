#include<iostream>
#define MAX 50
using namespace std;
void mean2(int a,int b);
void mean3(int a,int b, int c);
void checkPrime(int num);
main()
{
  int i,j,k,e,f,g, count=0,array[MAX],count2=0;
	for(i=10;i<=90;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			  count++;
			}

		}
		if(count==2)
		{

            array[count2]=i;
			count2++;

		}

	}



    for(j=0;j<count2;j++)
    {
        int a,b,c;

            mean2(array[j],array[j+1]);
            mean2(array[j],array[j+2]);
            mean3(array[j],array[j+1],array[j+2]);


        }
    }


	void mean2(int a,int b)
	{
        int num=0;
        num=a+b/2;
        checkPrime(num);

	}
	void mean3(int a,int b,int c)
	{
        int num=0;
        num=(a+b+c)/3;
        checkPrime(num);
	}
void checkPrime(int num)
{
    int e,f,g;
    for(i=4;i<num;i++){
		e=num%1;
		f=num%num;
		g=num%i;}
		if(e==0&&f==0&&g!=0){
			cout<<num;
			}

}


