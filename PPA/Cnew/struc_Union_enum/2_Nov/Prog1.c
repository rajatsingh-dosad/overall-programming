
#include<stdio.h>

struct Company {

	char* cname;
	int numEmp;

};

void main() {

	struct Company cmp1 = {"Biencaps",34};
	struct Company cmp2 = {"Biencaps",34};

	printf("%d\n",(cmp1.cname == cmp2.cname));
	printf("%d\n",(cmp1.numEmp ==  cmp2.numEmp));

	if((cmp1.cname == cmp2.cname) && (cmp1.numEmp == cmp2.numEmp)) {
		printf("Both objects are equal\n");
	}
	else {
		printf("Both objects are not equal\n");
	}
	

}
