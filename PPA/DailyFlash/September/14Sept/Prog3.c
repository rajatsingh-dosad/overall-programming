

#include<stdio.h>
#include<math.h>
void main() {

	int arr[6];
	int num,flag=0,max=0;
	for(int i=0;i<6;i++) {

		scanf("%d",&num);
		if(num%2==0) {
			arr[i] = num*num;
			if(arr[i] > max) {
				max=arr[i];
				flag=1;
			}
		}
		else {
			arr[i]=num;
			if(arr[i]> max) {
				max = arr[i];
				flag=0;
			}
		}

	}
	printf("MAximum  number is %d\n",max);
	if(flag==1) {
		int squareRoot = sqrt(max);
		printf("Max number after square rooting is %d\n",squareRoot);
	}
	else
		printf("Max number without square rooting is  %d\n",max);
}

