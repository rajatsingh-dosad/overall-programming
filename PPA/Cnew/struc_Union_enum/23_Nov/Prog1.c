
#include<stdio.h>


union Normal {

	int x;
	int y;
};

void main() {
	
	union Normal obj;
	
	printf("%ld\n",sizeof(obj));

	obj.x = 10;

	printf("%d %d\n",obj.x,obj.y);

	obj.y = 20;

	printf("%d %d\n",obj.x,obj.y);
	
	obj.x = 30;
	
	printf("%d %d\n",obj.x,obj.y);
	
	obj.y = 40;

	printf("%d %d\n",obj.x,obj.y);
}

