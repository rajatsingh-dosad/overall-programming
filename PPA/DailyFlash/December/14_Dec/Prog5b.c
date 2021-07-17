
#include<stdio.h>

void slope(int x1,int x2, int x3, int x4, int y1, int y2, int y3, int y4) {

	int m1 = (y2-y1)/(x2-x1);
	int m2 = (y4-y3)/(x4-x3);

	if(m1*m2 == -1) 
		printf("Lines are perpendicular\n");
	else if(m1 == m2)
		printf("Lines are parallel\n");

	
}
