
#include<stdio.h>

void slope(int,int,int,int,int,int,int,int);

void main() {

	int x1,x2,x3,x4,y1,y2,y3,y4;

	printf("Enter the values for line1: ");
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);

	printf("Enter the values for line2: ");
	scanf("%d %d %d %d",&x3,&x4,&y3,&y4);

	slope(x1,x2,x3,x4,y1,y2,y3,y4);
}
	
