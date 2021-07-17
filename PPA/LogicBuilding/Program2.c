

#include<stdio.h>

void main(void) {

	int count= 0;
	for(int i=1;count<5;i++) {

		if(i%5==0) {
			printf("%d\n",i);
			count+=1;
		}
	}
}
