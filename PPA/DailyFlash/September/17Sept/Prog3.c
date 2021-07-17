
#include<stdio.h>

void main() {

	int arr[6] = {2,4,1,6,8,5};
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int flag=0;
	for(int i=0;i<n;i++) {

		for(int j=i+1;j<n;j++) {

			if(arr[i]+arr[j] ==n) {

				printf("Index %d, index %d\n",i,j);
				flag=1;
			}
		}
		if(flag==1)
			break;
		
	}
}

