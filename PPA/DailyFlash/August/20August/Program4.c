

#include<stdio.h>

void main() {

	

	for(int i=1; i<=4*4; i++)

		if(i%4==0 )
			printf("%d\n",i);
	
		else if(i<10)
			printf("%d  ",i);
		
		else if(i<100)
			printf("%d ",i);
	
}

