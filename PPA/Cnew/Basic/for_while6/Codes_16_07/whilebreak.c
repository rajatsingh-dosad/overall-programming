

#include<stdio.h>

void main() {

	int i=1;
	while(i<=100) {

		if(i%5==0 && i%15==0)
			break;
		else
			printf("%d\n",i);
		i++;
	}
}
