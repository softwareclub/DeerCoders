#include<stdio.h>
#include<conio.h>
int main()
{
	 int num,i=0,j,thou,hund,ten;
	 char * words[100000];
	 int temp =0;
	 
	 printf("Enter the number, you want to convert into words");
	 scanf("%d",&num);
	 
	 while(num)
	   {
	   	temp=num%10;
	   	num=num/10;
	   	     
	   	      switch(temp)          //switch case
				 {
	   	      		case 0:
	   	      			words[i++]="Zero";
						break;
					case 1:
					    words[i++]="One";
						break;
					case 2:	   	   
						words[i++]="Two";
						break;
					case 3:
						words[i++]="Three";
						break;
					case 4:
						words[i++]="Four";
						break;
					case 5:
						words[i++]="Five";
						break;
					case 6:
						words[i++]="Six";
						break;
					case 7:
						words[i++]="Seven";
						break;
					case 8:
						words[i++]="Eight";
						break;
					case 9:
						words[i++]="Nine";
						break;
		 		}
				
	   }
	   
	    for(j=i-1;j>=0;j--)
			{
        		 printf("%s ",words[j]);
		    }
	  	return 0;  
}       

     
