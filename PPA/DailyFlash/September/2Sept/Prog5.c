
#include<stdio.h>

void main() {

	int n1, n2, n3;

	printf("Enter the three numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);

	int max= ((n1>n2) ? ((n1>n3) ? n1 : n3) : ((n2>n3) ? n2: n3));

	printf("The maximum number amongst %d, %d and %d is %d\n",n1,n2,n3,max);
}
