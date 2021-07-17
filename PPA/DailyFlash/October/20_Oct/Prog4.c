
#include<stdio.h>
#include<stdbool.h>

int Palindrome(int num) {
		
	int temp = num;
	int rem = 0;
	int palin = 0;
	while(temp!=0) {
		
		rem = temp % 10;
		palin = palin * 10 + rem;
		temp = temp / 10;
	}
	if(num == palin)
		return true;
	else 
		return false;

}
void main() {

	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	if(Palindrome(num))
		printf("%d is a palindrome number\n",num);
	else
		printf("%d is not a palindrome number\n",num);
}
