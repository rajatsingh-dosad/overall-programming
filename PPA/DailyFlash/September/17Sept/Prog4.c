
#include<stdio.h>

void main() {
	
	char ch;
	int i=0,count=0;
	char alpha[10];
	while(1) {

		scanf("%c",&ch);
		if((ch>='A' && ch<='Z') || (ch>='a' && ch <='z')) {
			alpha[i]=ch;
			i++;
			count++;
		}
		else if(ch=='\n')
			break;
	}
	printf("Output: ");
	for(int j=0;j<count;j++){
		printf("%c ",alpha[j]) ;
	}
	printf("\n");
}


