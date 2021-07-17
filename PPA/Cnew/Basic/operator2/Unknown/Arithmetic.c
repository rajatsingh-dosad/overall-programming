

#include<stdio.h>

void main() {

	int a = 5, b = 6, c = 7, ans;
	
	ans=a + b - c;  //  left to right associtivity because chose that is closer to "=".

	printf("%d\n",ans);

	ans = a * b / c;  //Left to right
	 
	printf("%d\n",ans);

	ans = a + b / c - a * b;

	printf("%d\n",ans);

}
