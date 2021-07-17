

#include<stdio.h>

void main() {

	int n1,n2;

	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);

	for(int i=n1;i<=n2;i++) {
		int num = i;
		int fac=1;
		while(num>0) {

			fac = fac * num;
			num--;
			
		}
		printf("Factorial of %d = %d\n",i,fac);
	}
}


