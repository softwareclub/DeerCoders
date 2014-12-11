/*Program to count and display total of 2 same digits in 3 digit and 4 digit number*/

#include<stdio.h>
//function declaration

int for3Digit();
int for4Digit();

//Global variable declaration
int i,temp;		

int main(){
	int totalCount,choice;
	
	//menu
	do{
		printf("Enter: ");
		printf("\n\t0 - 2 same digits in 3 digit Number.\n");
		printf("\n\t1 - 2 same digits in 4 digit Number.\n");
		printf("\n\t2 - Exit.\n");
		scanf("%d",&choice);
		
		if(choice==0){
			totalCount=for3Digit();
			printf("\nNumber of 3 digit number having two number same is :%d\n",totalCount);
		}
		else if(choice==1){
			totalCount=for4Digit();
			printf("\nNumber of 4 digit number having two number same is :%d\n",totalCount);
		}
		else if(choice==2){
			break;
		}
		else{
			printf("You did not follow instruction.\n");
		}
		
	}while(1);
	return 0;
}

int for3Digit(){
	
	int count=0,num[3]; //local count and array of size 3 for 3 digit number
	for(i=100;i<=999;i++){
		
		temp=i;
		//breaking number into digits
		num[0]=temp/100;
		temp-=num[0]*100;

		num[1]=temp/10;
		temp-=num[1]*10;

		num[2]=temp;
		
		//comparing digit with each other
		
		if(num[0]==num[1]&&num[0]!=num[2]){
			printf("\t%d",i);
			count++;
		}
		else if(num[1]==num[2]&&num[1]!=num[0]){
			printf("\t%d",i);
			count++;
		}
		else if(num[0]==num[2]&&num[0]!=num[1]){
			printf("\t%d",i);
			count++;
		}
	}
	return count;
}
int for4Digit(){
	
	int count=0,num[4];	//local count and array of size 4 for 4 digit number
	
	for(i=1000;i<=9999;i++){
		temp=i;
		//breaking number into digits		
		num[0]=temp/1000;
		temp-=num[0]*1000;	
			
		num[1]=temp/100;
		temp-=num[1]*100;

		num[2]=temp/10;
		temp-=num[2]*10;		

		num[3]=temp;

		//comparing digit with each other
			
		if(num[0] == num[1] && num[0] != num[2] && num[0] != num[3]){
			
			printf("\t%d",i);
			count++;
			
		}
		else if(num[0] == num[2] && num[0] != num[1] && num[0] != num[3]){
			
			printf("\t%d",i);
			count++;			
		}
		else if(num[0]==num[3]&&num[0]!=num[1]&&num[0]!=num[2]){
			
			printf("\t%d",i);
			count++;			
		}
		else if(num[1]==num[2]&&num[1]!=num[0]&&num[1]!=num[3]){
			
			printf("\t%d",i);
			count++;			
		}
		else if(num[1]==num[3]&&num[1]!=num[0]&&num[1]!=num[2]){
			
			printf("\t%d",i);
			count++;			
		}
		else if(num[2]==num[3]&&num[2]!=num[0]&&num[2]!=num[1]){
			
			printf("\t%d",i);
			count++;			
		}
	}
	return count;
}
