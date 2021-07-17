
#include<stdio.h>

void main() {

	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	int add=1;
	for(int i=1;i<=n;i++) {

		printf("%d ",add);
		add = add+n;
	}
	printf("\n")
}
