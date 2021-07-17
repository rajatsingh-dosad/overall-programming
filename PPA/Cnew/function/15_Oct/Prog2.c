
#include<stdio.h>

int passArr(int *ptr) {
	
	int sum =0;
	for(int i=0;i<5;i++) {
		
		sum = sum + *(ptr+i);
	}
	return sum;

}
void main() {

	int arr[] = {10,20,30,40,50};

	int sum = 0;

	sum = passArr(arr);

	printf("%d\n",sum);	//150
}
