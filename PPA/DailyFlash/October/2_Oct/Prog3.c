
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr1[n];
	int arr2[n];
	int *ptr1 = arr1;
	int *ptr2 = arr2;

	printf("Enter the elements in array1: ");
	for(int i=0;i<n;i++) {

		scanf("%d",&arr1[i]);
	}
	
	printf("Enter the elements in array2: ");
	for(int i=0;i<n;i++) {

		scanf("%d",&arr2[i]);
	}

	int flag = 0;
	for(int i=0;i<n;i++) {
		int num = *(ptr1+i);
		for(int j=0;j<n;j++) {

			if(*(ptr2+j) == num)
				flag = 1;
		}
		if(flag==0) {
			printf("Both arrays are different\n");
			break;
		}
	}
	if(flag==1)
		printf("Both arrays are same\n");
}



			

