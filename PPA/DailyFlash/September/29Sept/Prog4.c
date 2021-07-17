
#include<stdio.h>

void main() {

	int n;
	printf("Enter the size of character array: ");
	scanf("%d",&n);

	char ch[n];
	char *cptr = ch;

	printf("Enter the elements in array:: ");
	for(int i=0;i<n;i++) {

		scanf(" %c",&ch[i]);
		
	}

	for(int i=0;i<n;i++) {

		if(ch[i] >'A' && ch[i] < 'Z')
			ch[i]  = ch[i] + 32;
		
		else if(ch[i] >'a' && ch[i] < 'z')
			ch[i]  = ch[i] - 32;
	}

	for(int i=0;i<n;i++) {

		printf("%c ",*cptr);
		cptr++;
	}
	printf("\n");
}




