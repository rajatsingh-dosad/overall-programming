

#include<stdio.h>

void main() {

	int startNo, endNo;
	printf("Min of Series: ");
	scanf("%d",&startNo);

	printf("Max of Series: ");
	scanf("%d",&endNo);

	printf("Series of Odd Numbers ranging between %d & %d is:\n",startNo,endNo);
	
	for(int i=startNo;i<=endNo;i++) {


		if(i%2!=0)
			printf("%d ",i);
	}
	printf("\n");
}


