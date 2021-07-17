

#include<stdio.h>

void main() {

	int prevTerm = 0;
	int currentTerm = 1;

	int nextTerm;
	
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++) {

		printf("%d ",prevTerm);
		nextTerm=prevTerm+currentTerm;
		prevTerm=currentTerm;
		currentTerm=nextTerm;
}
}
