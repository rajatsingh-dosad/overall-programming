

#include<stdio.h>

void main() {

	int a,b;
	printf("Enter the number: ");
	scanf("%d%d",&a,&b);

	printf("Before Swap: a=%d & b=%d\n",a,b);

	int temp=b;
	b=a;
	a=temp;

	printf("After Swap: a=%d & b=%d\n",a,b);
}
