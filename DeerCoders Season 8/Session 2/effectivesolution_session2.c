//Coder Effective solution season 8 session 2(Mathematical problem solving)
#include<stdio.h>
#include<conio.h>
#define MAX 10
void inputandmerge(int array1[MAX], int array2[MAX]);			//function declaration
void sortandprint(int array2[MAX], int size);					//function declaration
int main(){
	int array1[MAX],array2[MAX]; //Declaring the variables
	inputandmerge(array1,array2);
}
void inputandmerge(int array1[MAX], int array2[MAX]){							//Function to take input and merge the element of 2st and 2nd array
	int size,i,j,totalsize=0;
	printf("Enter the size of 1st array");
	scanf("%d",&size);
	totalsize+=size;
	printf("Enter the elements in 1st array");						//Taking input for first array
	for(i=0;i<size;i++){
		scanf("%d",&array1[i]);
	}
	printf("Enter the size of 2nd array");							//Taking input for second array
	scanf("%d",&size);
	printf("Enter the elements in 2nd array");
	for(i=0;i<size;i++){
		scanf("%d",&array2[i]);
	}
	totalsize+=size;
	j=0;
	for(i=size;i<totalsize;i++){								//merging the array
		array2[i] = array1[j];
		j++;
	}
	sortandprint(array2,totalsize);
}
void sortandprint(int array2[MAX], int size){					//Function to sort and print the elements of array
	int i,j,temp;
	for(i=0;i<size;i++){											// sorting algorithm enhanced bubble sort
		for(j=i+1;j<size;j++){
			if(array2[i]>array2[j]){
				temp = array2[i];
				array2[i] = array2[j];
				array2[j] = temp;
			}
			
		}
	}
	printf("The sorted array is\n");						//Displaying the sorted list
	for(i=0;i<size;i++){
		printf("%d",array2[i]);
	}
	
}
