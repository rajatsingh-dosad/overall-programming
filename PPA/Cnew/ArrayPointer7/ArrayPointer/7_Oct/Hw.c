
#include<stdio.h>

void main() {

	int a = 10, b = 20, c = 30;

	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3 = &c;

	int **pptr1 = &ptr1;
	int **pptr2 = &ptr2;
	int **pptr3 = &ptr3;

	int** arrptr[3] = {pptr1,pptr2,pptr3};

	printf("%p\n",arrptr[0]);
	printf("%p\n",arrptr[1]);
	printf("%p\n",arrptr[2]);

	printf("%d\n",*(*(arrptr[0])));
	printf("%d\n",*(*(arrptr[1])));
	printf("%d\n",*(*(arrptr[2])));

	printf("%d\n",*(*(*(arrptr+0))));
	printf("%d\n",*(*(*(arrptr+1))));
	printf("%d\n",*(*(*(arrptr+2))));
}
