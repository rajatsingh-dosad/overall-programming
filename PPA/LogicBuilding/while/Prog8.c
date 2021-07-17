
#include<stdio.h>

void main() {

	int num=1;
	int mul=1;
	int n;
	while(num <=12) {

		scanf("%d",&n);
		if(n<0) {
			num++;
			continue;
		}
		else {
			mul =mul*n;
		}
		num++;
	}
	printf("Multiplication is %d\n",mul);
}






