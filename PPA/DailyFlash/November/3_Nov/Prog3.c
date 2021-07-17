
#include<stdio.h>
#pragma pack(1)

struct values {

	char name[10];	//10
	int num;	//4
	int *ptr;	//8
	char c;		//1
	float f;	//4
};

void main() {

	struct values val;
	printf("%ld\n",sizeof(struct values));
}
