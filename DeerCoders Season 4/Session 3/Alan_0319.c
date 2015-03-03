#include<stdio.h>
#include<conio.h>

int add_bin(int a, int b);
int mul_bin(int a, int b);
int xor_bin(int a, int b);

int main()
{
    int a[8]={0,0,0,0,1,1,1,1},b[8]={0,0,1,1,0,0,1,1},c[8]={0,1,0,1,0,1,0,1};
    int i;
    int w[8];
    for(i=0;i<8;i++)
    {

        w[i]=add_bin(a[i],b[i]);
    }

    for(i=0;i<8;i++)
    {
        w[i]=mul_bin(w[i],c);
    }

    for(i=0;i<8;i++)
    {
        w[i]=xor_bin(w[i],a);
    }


    printf("The final output is");
    for(i=0;i<8;i++)
    {
        printf("\n%d",w[i]);

    }
}
int add_bin(int a, int b)
{
    if(a==0 && b==0)
        return 0;

    else
        return 1;
}

int mul_bin(int a, int b)
{

    if(a==1 && b==1 )
        return 1;
    else
    return 0;

}

int xor_bin(int a, int b)
{

    if(a==b)
  return 0;
  else
    return 1;
}

