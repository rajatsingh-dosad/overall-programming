

#include<stdio.h>

void main() {
	char ch='A';
	int count=1;
	int i=1;
	while(i<=5) {
		int j=5;
		while(j>=i) {

			if(j==4 || j==2)
				printf("%d  ",count);
			else
				printf("%c  ",ch);
			
			ch++;
			count++;
			j--;
		}
		i++;
		printf("\n");
	}
}
