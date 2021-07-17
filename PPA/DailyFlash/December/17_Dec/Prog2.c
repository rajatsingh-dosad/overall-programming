
#include <stdio.h>

#define Add(a,b) (printf("Addition : %d\n",a+b))
#define Sub(a,b) (printf("Subtraction : %d\n",a-b))
#define Mult(a,b) (printf("Multiplication : %d\n",a*b))
#define Div(a,b) (printf("Division : %.2f\n",(float)a/b))


void main() {

	int a,b;
	printf("Enter the two numbers: ");
	scanf("%d %d",&a,&b);

	Add(a,b);
	Sub(a,b);
	Mult(a,b);
	Div(a,b);
}
