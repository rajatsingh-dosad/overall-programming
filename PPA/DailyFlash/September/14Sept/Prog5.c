
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];

	for(int i=0 ;i<n;i++) {

		scanf("%d",&arr[i]);
	}
	
	
	for(int i=0;i<n;i++) {
		int temp=arr[i];
		int first = 0;
		int last =0;

		int fSum=0;
		int lSum=0;
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


	int temp1 = arr[n-1];
	while(temp1!=0) { 
		int lFac = 1;
		int rem = temp1%10;
		while(rem>0) {
			lFac = lFac * rem;
			rem--;
		}

		lSum = lSum + lFac;
		temp1 =temp1 /10;
	}
	if(lSum == arr[n-1])
		last = 1;

		
	if(first==1 && last==1) {

		int swp = arr[n-1];
		arr[n-1] =arr[i];
		arr[i] = swp;
	}
	
	}
	for(int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}


