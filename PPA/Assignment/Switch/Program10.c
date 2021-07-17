

#include<stdio.h>

void main() {
	
	int x,y;
	int mul;
	
	printf("Enter the two values\n");
	scanf("%d %d",&x,&y);

	if(x>0 && y>0) {
		mul=x*y;
		printf("mul=%d\n",mul);
		switch(mul%2) {
			
			case 0:
			       printf("Even number\n")	;
			       break;

			case 1:
			       printf("Odd number\n");
			       break;
		}
	}
		

	else {
		printf("Sorry negative numbers not allowed\n");
}
}

/* We have asked user to enter two numbers.The condition is that both number should be positive ,if any one of the number is negative we print "Negative numbers not allowe"
   If both numbers are positive we multiply them and give that to switch(mul%2) .To check whether the multiplid number is even or odd we use modulus operator*/
