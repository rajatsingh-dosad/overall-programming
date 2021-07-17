
#include <stdio.h>

#define name 'm','a','d','a','m'

void main() {

	char arr[] = {name};

	int flag = 0;

	for(int i=0;i<((sizeof(arr)/sizeof(arr[0])-1)/2);i++) {

		if(arr[i] == arr[(sizeof(arr)/sizeof(arr[0]))-i-1])
			continue;
		else {
			flag = 1;
			break;
		}
	}

	if(flag == 1)
		printf("Elements of the array are not palindrome\n");
	else
		printf("Elements of the array are palindrome\n");
}
