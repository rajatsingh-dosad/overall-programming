
#include<stdio.h>

void max() {
	
	int a,b,c;
	printf("Enter the three numbers: ");
	scanf("%d %d %d",&a,&b,&c);

	int ans = ((a>b) ? ((a>c) ? a : c) : ((b>c) ? b: c));

	printf("Largest among three numbers is %d.\n",ans);
}
