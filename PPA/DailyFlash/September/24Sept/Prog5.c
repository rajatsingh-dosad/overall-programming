
#include<stdio.h>

void main() {

	int n1,n2;
	char op;
	printf("Enter the two numbers: ");
	scanf("%d %d",&n1,&n2);

	printf("Enter the Operation you want to do: \n");
	printf(" +)Addition\n -)Subtraction\n *)Multiplication\n /)Division\n %c)Modulo\n ^)Power\n",'%');
	
	printf("Enter your choice: ");
	scanf(" %c",&op);
	
	int *iptr1 = &n1;
	int *iptr2 = &n2;
	char *cptr = &op;
	
	int ans = 1;
	switch(*cptr) {

		case '+':
			printf("Output : %d\n",n1+n2);
			break;
		case '-':
			printf("Output : %d\n",n1-n2);
			break;
		case '*':
			printf("Output : %d\n",n1*n2);
			break;
		case '/':
			printf("Output : %d\n",n1/n2);
			break;
		case '%':
			printf("Output : %d\n",n1%n2);
			break;
		case '^':
			while(n2>0) {
				ans = ans * n1;
				n2--;
			}
			printf("Output : %d\n",ans);
			break;
		default:
			printf("Wrong input\n");
			break;
	}
}
