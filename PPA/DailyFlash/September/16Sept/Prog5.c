
#include<stdio.h>
#include<math.h>
void main() {

	int arr[] = {9, 12, 153, 1, 2, 370, 5, 67, 3};
	int count=0, c=0;
	int armStr[9];
	for(int i=0; i<9; i++) {
		
		int n =arr[i];
		int j =arr[i];
		int rem = 0;
		int sum = 0;
		int nCount=0;
		
		while(n!=0) {
			n = n/10;
			nCount++;
		}
		while(j!=0) {

			rem =j % 10;
			sum = sum + pow(rem,nCount);
			j =j/10;
		}
		if(sum == arr[i]) {
			count++;
			armStr[c] = arr[i];
			c++;

		}
	}
	int temp;
	for(int i=0; i<count; i++) {

		int number=0;
		for(int j=1;j<count;j++) {

			if(armStr[number] > armStr[j]) {
				temp =armStr[number];
				armStr[number] =armStr[j];
				armStr[j] = temp;
			}
			number++;
		}
	}
	
	printf("Armstrong numbers are : [ ");
	for(int i=0;i<count; i++) {
		printf("%d ",armStr[i]);
	}
	printf(" ]\n");
}






