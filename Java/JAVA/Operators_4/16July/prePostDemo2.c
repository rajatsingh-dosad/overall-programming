

#include<stdio.h>

void main() {

	int num = 10;
	int ans = 0;

	ans=num++ + num++;

	printf("%d\n",ans);
	printf("%d\n",num);
}
