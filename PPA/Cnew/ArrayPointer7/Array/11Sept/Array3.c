

#include<stdio.h>

void main() {

	int num,max=0;

	printf("Enter the size of Array: ");
	scanf("%d",&num);
	
	int arr[num];

	for(int i=0;i<num;i++) {

		scanf("%d",&arr[i]);
		if(arr[i] > max)
			max=arr[i];
	}

/*	for(int i=0;i<num;i++) {

		if(arr[i]>max)
			max = arr[i];	
	}
*/
	printf("Maximum number is : %d\n",max);
}
