

#include<stdio.h>

void main() {

	int min, max;

	printf("Min of the series: ");
	scanf("%d",&min);
	
	printf("Max of the series: ");
	scanf("%d",&max);

	for(int i=min; i<=max; i++) {

		if(i%2==0) {
			if(i==max)
				printf("%d\n",i);
			else
				printf("%d, ",i);
		}
	}
}
