
#include<stdio.h>

void main() {

	int a = 10,b = 20;

	if((a && b++) && (a++ || ++b)) {		// ((10 && 20) && (11 || 21))
							


		printf("a:%d\n",a);   // a=11 it is post incremented by one
		printf("b:%d\n",b);  // b=21 here answer is 21 because (a++ || ++b) here  doesn't check for ++b as is '||' operator and a++ is 1 i.e true
	}
	printf("Out of if\n");		//will Print num:20
}
