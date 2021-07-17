
#include<stdio.h>

int a = 10, b = 20;

void main() {
	
	printf("%d %d\n",a,b);
	int a = 30, b = 40;

	{
		printf("%d %d\n",a,b);
		int a = 50, b = 60;

		{
			printf("%d %d\n",a,b);
		}
	}
}
