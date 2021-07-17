

#include<stdio.h>

void main() {
	int num=1;
	for(int i=1; i<=16; i++) {
		
		if(i%4==0) {
			printf("%d\n",2*num);
			num=1;
		}
		else	{
			printf("%d ",2*num);
			num++;
		}
	}
}
