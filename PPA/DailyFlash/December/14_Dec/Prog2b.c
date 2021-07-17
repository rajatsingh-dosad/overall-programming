
#include<stdio.h>

void delElement(int *ptr,int element, int size) {

	for(int i=0;i<size;i++) {
	
		if(*(ptr+i) == element) {
			
			for(int j=i; j<size;j++) {
				
				*(ptr+j) = *(ptr+j+1);
			}
			break;
		}
	}
}
