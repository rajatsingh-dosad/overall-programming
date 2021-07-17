
#include<stdio.h>

void fun(int *,int *);			//prototype of function fun()

void main() {

	int a = 10;			//a is assigned value as 10
	int b = 2;			//b is assigned value as 2
	int arr[5] = {30,40,50,60,70};	//an array is initialized

	int *pa = &a;			//pointer to a 
	int *pb = &b;			//pointer to b
	int *ptr = arr;			//pointer to arr
		
	fun(arr,ptr);				//call is given to the function fun()
	printf("Value: %d\n",*pa/(*pb));	//Value of a/b is done 	
}

void fun(int *arr,int *ptr) {			//Actual function body
		
	++*ptr;					//Here value at base address is incremented by 1 i.e 31
	printf("Address:%p\t value:%d\n",ptr,*ptr);	//31

	*ptr++;					//Here pointer is first incremented by 1 and value is printed
	printf("Address:%p\t value:%d\n",ptr,*ptr);	//40
}
