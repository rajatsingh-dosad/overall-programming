
// Sum of Digit
// e.g 1234 -> 10

#include <stdio.h>


//Using Iterative way
/*int sumOfDig(int num) {

	int sum = 0;
	
	while(num!=0) {

		sum += num%10;
		num = num / 10;
	}

	return sum;
}*/


//Using recursion - Tail recursion
int sumOfDig(int num) {
	static int ans = 0;
	if(num==0)
		return ans;
	ans = ans + num%10;
	sumOfDig(num/10);
}


//Using recursion - Optimized - Non-Tail recursion
/*int sumOfDig(int num) {

	if(num==0)
		return 0;

	return num%10 + sumOfDig(num/10);
}*/

void main() {

	int sum = sumOfDig(1234);

	printf("The sum of digit is: %d\n",sum);
}
