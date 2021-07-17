
#include<stdio.h>

void main() {

	int n,countV=0,countC=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);

	char ch[n];

	for(int i=0; i<n; i++) {

		scanf(" %c",&ch[i]);
	}

	for(int i=0;i<n;i++) {

		if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' || 
		ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')

			countV++;
		else
			countC++;
	}
	printf("Vowels: %d\n",countV);
	printf("Consonants: %d\n",countC);
}








