
#include<stdio.h>

void main(void) {
	
	int size;
	printf("Enter the number of subjects: ");
	scanf("%d",&size);

	int arr[size];
	int *ptr= arr;
	
	printf("Enter the marks of 5 subjects: ");
	for(int i=0;i<size;i++) {

		scanf("%d",ptr++);
	}
	
	float per = 0;
	int sum = 0;
	int totalMarks = 0;
	for(int i=0; i<size; i++) {
		
		sum = sum + arr[i];
		totalMarks += 100;

	}
	per = (float)(sum*100)/totalMarks;
	printf("Percentage is: %.1f\n",per);
}

		
