#include<stdio.h>
#include<conio.h>
int main(){
	int x,y,z;
	int i,j;
	//int a[50];
	int flag=0;
	for(i=10;i<=100;i++)
	{
		flag = 0;
		for(j=1;j<=i;j++){
		
			if(i%j==0){
				flag++;
			}
		}
	
			if(flag==2)
			{
				printf("prime = %d\n",i);
	        }
	}
}

//int mean_a(int x,y){
	//mean=x+y/2;
//}
