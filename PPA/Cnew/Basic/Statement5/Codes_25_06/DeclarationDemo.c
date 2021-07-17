

#include<stdio.h>

void main() {

	extern int a;

	printf("%d",a);

	printf("%ld\n",sizeof(a));

}
