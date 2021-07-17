
#include<stdio.h>

void main() {
	int num,sum=0;
	printf("Enter size of array : ");
	scanf("%d",&num);
	int stud_age[num];

	printf("Enter array element: ");

	for(int i=0;i<num;i++) {

		scanf("%d",&stud_age[i]);
	}
	printf("Sum of Array element: \n");
	for(int j=0;j<num;j++) {

		sum=sum+stud_age[j];
	}
	printf("%d\n",sum);
}
