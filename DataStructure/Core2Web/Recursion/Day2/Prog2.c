
//Reverse the number
//e.g 125 -> 521

#include <stdio.h>

//Using iterative way
/*int reverseNum(int num) {
	
	int rev = 0;
	while(num!=0) {
		
		rev = (rev*10) + num%10;
		num = num/10;
	}
	return rev;
}*/


//Using recursion
int reverseNum(int num) {

	static int rev = 0;
	if(num==0)
		return rev;
	rev = rev*10 + num%10;
	reverseNum(num/10);
}

void main() {
	int ans = reverseNum(123456789);
	printf("The number after reversing is: %d\n",ans);
}
