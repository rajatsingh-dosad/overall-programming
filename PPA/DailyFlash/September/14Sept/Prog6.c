
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];

	for(int i=0 ;i<n;i++) {

		scanf("%d",&arr[i]);
	}
	
	int b =arr[n-1];
	int lastNoStrong=0;
	int lSum=0;

	while(b!=0) { 
		int lFac = 1;
		int rem = b%10;
		while(rem>0) {
			lFac = lFac * rem;
			rem--;
		}
		b = b/10;
		lSum = lSum + lFac;
	}
	if(lSum == arr[n-1])
		lastNoStrong = 1;

	if(lastNoStrong==1) {
	
		for(int i=0;i<n;i++) {
			int temp=arr[i];
			int first = 0;
			int fSum=0;
			while(temp!=0) { 
				int fFac = 1;
				int rem = temp%10;
				while(rem>0) {
					fFac = fFac * rem;
					rem--;
				}
				temp = temp/10;
				fSum = fSum + fFac;
			}
			if(fSum == arr[i])
				first = 1;
			if(first==1) {
				int dup = arr[i];
			       	arr[i] = arr[n-1];
				arr[n-1] =dup;
			}	
		}


		for(int i=0;i<n;i++) {
			printf("%d ",arr[i]);
		}
		printf("\n");
	}

	else {
		for(int i=0;i<n;i++) {
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
}


