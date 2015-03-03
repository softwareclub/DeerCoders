
#include<stdio.h>
#include<conio.h>
void main()
{
 int i=8, a[8]={0,0,0,0,1,1,1,1}, b[8]={0,0,1,1,0,0,1,1}, c[8]={0,1,0,1,0,1,0,1},s[8],p[8],f[8];
 for(i=0;i<8;i++)
 {
  if(a[i]==1||b[i]==1)
  {
     s[i]=1;
  }
   else
   {

   s[i]=0;
   }
   if((s[i]==1)&&c[i]==1)
   {
   p[i]=1;
   }
   else
   {
   p[i]=0;
   }
   if((p[i]==0&&a[i]==0)||(p[i]==1&&a[i]==1))
   {
    f[i]=0;
   }
    else
    {
    f[i]=1;
    }
    if(f[i]==1)
    {
    printf("0");
    }
    else
    {
        printf("1");
    }
 }
   getch();
}
