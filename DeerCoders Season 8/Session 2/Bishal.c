#include<stdio.h>
main()
{
	int a[100],b[100],n1,n2,i,R[100],j,t,tot;
	printf("Input number of elements in the first array\n");
	scanf("%d",&n1);//n1 will be the number of the element which can be kept in the first array
	printf("Input %d numbers\n",n1);
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("Input numbers of elements in second array\n");
	scanf("%d",&n2);//n2 will be the number of the element which can be kept in the second array
	printf("Input %d numbers\n",n2);
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++){
		R[i]=a[i];//here we put the 1st array in the first n1 places
	}
	for(i=0;i<n2;i++){
		R[i+n1]=b[i];//here we put the 2nd array in the places after n1 in the array
	}
	tot=n1+n2;//this is the total number of elements in the arrays combined
	for(i=0;i< tot;i++){
		for(j=0;j<i;j++){
			if (R[i]<R[j]){//simple bubble sort to check sort the values in ascending order
				t=R[i];
				R[i]=R[j];
				R[j]=t;
			}
		}}
	printf("Sorted array\n");
	for(i=0;i<tot;i++){
		printf("%d\n",R[i]);
	}
}
