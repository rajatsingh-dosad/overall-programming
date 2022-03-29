
//Fibonacci number

#include <stdio.h>

int fibo(int n) {

	int first  = 0,second = 1;
	int ans = 0;

	if(n<=1)
		return n;

	for(int i=3;i<=n;i++) {

		ans = first + second;
		first = second;
		second = ans;
	}

	return ans;
}

void main() {

	int ans = fibo(5);

	printf("%d\n",ans);
}
