

#include<stdio.h>
void main() {

	int x=5,y=6,ans=0;

	ans=++x && y++;

	printf("X=%d Y=%d Ans=%d\n",x,y,ans);

	int x=5,y=6,ans=0;

	ans=++x || y++;

	printf("X=%d Y=%d Ans=%d\n",x,y,ans);
}
