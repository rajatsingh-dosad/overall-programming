
#include<stdio.h>

void main() {
	int num;
	printf("Enter size of array : ");
	scanf("%d",&num);
	int stud_age[num];

	printf("Enter array element: ");

	for(int i=0;i<num;i++) {

		scanf("%d",&stud_age[i]);
	}
	printf("Array element: \n");
	for(int j=0;j<num;j++) {

		printf("%d ",stud_age[j]);
	}
	printf("\n");
}
