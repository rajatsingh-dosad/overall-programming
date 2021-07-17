
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	char ch[n];
	char *carr = ch;

	printf("Enter the characters in an array: " );
	for(int i=0;i<n;i++) {

		scanf(" %c",&ch[i]);
	}

	for(int i=0;i<n;i++) {

		if(*(carr+i)=='a' || *(carr+i)=='e' || *(carr+i)=='i' || *(carr+i)=='o' || *(carr+i)=='u')
			printf("%c ",*(carr+i)-32);
		else if(*(carr+i)=='A' || *(carr+i)=='E' || *(carr+i)=='I' || *(carr+i)=='O' || *(carr+i)=='U')
			printf("%c ",*(carr+i));

		else {
			if(*(carr+i)>='A' &&  *(carr+i)<='Z')
			       printf("%c ",*(carr+i)+32);	
			else
				printf("%c ",*(carr+i));
	}
	printf("\n");
}
}
