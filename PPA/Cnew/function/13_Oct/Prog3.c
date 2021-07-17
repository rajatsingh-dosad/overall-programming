
#include<stdio.h>

int fac(int);

void main() {

	int val;

	printf("Enter the number for factorial: ");
	scanf("%d",&val);

	int ret = fac(val);

	printf("%d\n",ret);

}

int fac(int num) {
	
	int fac = 1;
	while(num>0) {
		fac = fac * num;
		num--;
	}
	return fac;
}


