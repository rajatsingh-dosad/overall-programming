
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	int arr[n];

	for(int i=0;i<n;i++) {

		scanf("%d",&arr[i]);
	}
	int num = 0;
	for(int i=0;i<n;i++) {
		
		int count = 0;
		for(int j=0; j<n;j++) {
			if(num == arr[j]){
				count++;
			}
		}
		if(count>0)
			printf("%d occurs: %d times\n",num,count);
		num++;
	}
}



		
