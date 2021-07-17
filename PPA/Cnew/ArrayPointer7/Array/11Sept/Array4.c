

#include<stdio.h>

void main() {

	int num,max=0;

	printf("Enter the size of Array: ");
	scanf("%d",&num);
	
	int arr[num];

	for(int i=0;i<num;i++) {

		scanf("%d",&arr[i]);
	
	}
	int n;
	for(int i=0;i<num;i++) {
		n = arr[i];
		int sum=0;
		while(n!=0) {
			int rem= n%10;
			int fac=1;
			while(rem>=1) {

				fac = fac * rem;
				rem--;
			}
			n=n/10;
			sum =sum+fac;
		}
		if(arr[i] == sum)
			printf("%d is a strong number\n",arr[i]);


	}
}
