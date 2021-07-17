
#include<stdio.h>

void main() {

	printf("Enter your name: ");
	int i=0;
	char c;
	char arr[50];
	char *arrptr[50];
	while(1) {
		
		scanf("%c",&c);
		if(c==10)
			break;
		arr[i] = c;
		arrptr[i] = &arr[i];
		i++;

	}
	int index = 0;
	for(int j=i-1;j>=0;j--) {

		printf("%c",*arrptr[j]);
		if(*arrptr[j]==' ')
			index = j;
	}
	printf("\nSpace at %d index.\n",index);
}
		



		
