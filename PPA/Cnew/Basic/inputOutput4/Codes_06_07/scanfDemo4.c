

#include<stdio.h>

void main() {

	int a,b,ans;

	printf("Enter the number of a and b: \n");

	scanf("%d %d",&a,&b);		//20 10
	
	//add
	ans =a+b;
	printf("Add=%d\n",ans);		//30

	//sub
	ans=a-b;
	printf("Sub=%d\n",ans);		//10

	//mul
	ans=a*b;
	printf("Mult=%d\n",ans);		//200
	
	//div
	ans=a/b;
	printf("Div=%d\n",ans);		//2


}
