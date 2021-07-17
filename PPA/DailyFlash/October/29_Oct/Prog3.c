
#include<stdio.h>
#include<string.h>

void main()  {

	char arr[20],ch;
	int index = 0;
	
	printf("Enter the string: ");
	while((ch=getchar())!='\n') {

		arr[index] = ch;
		index++;
	}
	arr[index] = '\0';
	
	printf("OUTPUT:\n");
	for(int i=0;i<strlen(arr);i++) {

		printf("%c ",arr[i]);
	}
	printf("\n");
}
