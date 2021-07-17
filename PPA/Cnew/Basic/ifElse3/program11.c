

#include<stdio.h>

void main() {

	int number1, number2;
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);	
	if (number1 >= number2) {		
		if (number1 == number2) {	
			printf(" %d = %d\n",number1,number2);
		}
		else {
			printf(" %d > %d\n", number1, number2);
		}
	}
	else {
		printf(" %d < %d\n",number1, number2);		//prints
	}
}

/*In this program if number1>=number2 than first 'if' is true so it enters the if and for 'if' inside it checks if number==number
if it is true it prints %d=%d else prints %d>%d  AND if in the beginning only if number>=number2 is false than it will directly come in the last else and print %d<%d.*/ 
