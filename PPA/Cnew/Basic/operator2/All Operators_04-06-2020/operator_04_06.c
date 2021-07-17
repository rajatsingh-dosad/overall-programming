

#include<stdio.h>
void main() {
	int x=8,ans=0;
	ans=++x + x++ + --x + x--;
	printf("%d %d",x,ans);
}
