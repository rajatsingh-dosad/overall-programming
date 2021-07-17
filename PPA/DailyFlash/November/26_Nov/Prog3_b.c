
#include<stdio.h>

void table() {
	
	int a,b;

	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);

	for(int i=1;i<=b;i++) {

		printf("%d X %d = %d\n",a,i,a*i);
	}
}
