
#include<stdio.h>

void shopping() {

	printf("Shopping in Pavillion\n");
}

void eating() {

	printf("Eating at Mc'D\n");
}

void playing() {

	printf("Playing game in Mall\n");
}

void dancing() {

	printf("Dance practise for college gathering\n");
}
void main() {
	

	void (*fptr[4])() = {shopping,eating,playing,dancing};
	for(int i=0;i<4;i++) {

		fptr[i]();
	}
}
