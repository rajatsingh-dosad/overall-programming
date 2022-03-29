
//sum of a array where element is divisilble by 5

#include <stdio.h>
#define size 5

//Way 1

/*
int arr[size];
int ans = 0;

void sum(int i) {
	
	if(i==size)
		return;

	if(arr[i]%5==0)
		ans = ans + arr[i];
	
	sum(++i);
}

void main() {
	
	printf("Enter the element in the array: ");
	for(int i=0;i<size;i++) {

		scanf("%d",&arr[i]);
	}

	sum(0);
	printf("The sum is %d\n",ans);
}
*/


//Optimized code

int sum(int arr[],int i) {

	if(i>4)
		return 0;
	if(arr[i]%5==0)
		return arr[i] + sum(arr,i+1);
	sum(arr,i+1);
	
}

void main() {

	int arr[] = {10,12,20,33,50};

	int ans = sum(arr,0);

	printf("The sum is: %d\n",ans);
}











