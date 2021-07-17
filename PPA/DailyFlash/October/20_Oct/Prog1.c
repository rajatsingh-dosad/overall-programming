
#include<stdio.h>
#include<stdbool.h>

bool armstrong(int n) {
	int num = n;
	int temp = n;
	int cnt = 0;
	int arm = 0;
	while(num>0) {
		
		num = num /10;
		cnt++;
	}


	int cnt1;
	int rem = 0;
	int mul;
	while(temp!=0) {
		cnt1 = cnt;
		rem = temp % 10;
		mul = 1;
		while(cnt1>0) {

			mul = mul * rem;
			cnt1--;
		}
		arm = arm + mul;
		temp = temp / 10;
	}
	if(arm == n)
		return true;
	else
		return false;

}

void main() {

	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	

	if(armstrong(num))
		printf("%d is an armstrong number\n",num);
	else
		printf("%d is not an armstrong number\n",num);
	
}
