
#include<stdio.h>

void prime(int num) {
	
	int count = 0;
	for(int i=1;i<=num;i++) {
		
		if(num%i==0)
			count++;
	}
	if(count==2)
		printf("%d is a prime number\n",num);
	else 
		printf("%d is not a prime number\n",num);
}

void function2(int num,void (*fptr)(int)) {	
	
	fptr(num);
}


void main() {
	
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	printf("For function1:\n");
	void (*fptr)(int) = prime;
	fptr(num);

	printf("\nFor function2:\n");
	function2(num,&prime);
}

