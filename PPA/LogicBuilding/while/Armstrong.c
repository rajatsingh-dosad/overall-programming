
#include<stdio.h>

void main() {

	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	int tmp = n;
	int dup = n;
	int cnt;
	while(n!=0) {

		cnt++;
		n = n/10;
	}
	
	int sum=0;
	while(tmp!=0) {

		int rem = tmp%10;
		int mul=1;
	       	while(cnt > 0){
			mul = mul * rem;
			cnt--;
		}
		sum = sum + mul;
		tmp = tmp / 10;
	}

	if(sum == dup)
		printf("%d is a armstrong number\n",dup);
}



