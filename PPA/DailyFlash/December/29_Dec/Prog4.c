
#include <stdio.h>

#define add(a,b) a+b
#define sub(a,b) a-b
#define mul(a,b) a*b
#define div(a,b) a/b

void main() {

	int a,b;

	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);

	printf("The addition of two number is: %d\n",add(a,b));
	printf("The subtraction of two number is: %d\n",sub(a,b));
	printf("The multiplication of two number is: %d\n",mul(a,b));
	printf("The division of two number is: %d\n",div(a,b));
}
