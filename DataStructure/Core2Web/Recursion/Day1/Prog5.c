
//Factorial of a number

#include <stdio.h>

//Using normal way
int fact(int n) {

	int ans = 1;
	while(n!=0) {

		ans = ans * n;
		n--;
	}

	return ans;
}

/*
int factR(int n) {
	
	static int ans = 1;
	if(n==0)
		return ans;
	ans = ans * n;
	factR(n-1);

}
*/

//More optimized code in terms of number of lines
int factR(int n) {

	if(n==1)
		return 1;
	return n * factR(n-1);
}

void main() {

	int n = 4;
	
	int ansN = fact(n);
	int ansR = factR(n);

	printf("Normal code: o/p: %d\n",ansN);
	printf("Recursive coe: o/p: %d\n",ansR);
}
