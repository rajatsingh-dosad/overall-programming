

#include<stdio.h>

void main() {
	
	int n;
	long s=10;
	printf("Enter the last term: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++) {
		
		printf("%ld ",s-1);
		s=s*10;
	}
	printf("\n");
}
