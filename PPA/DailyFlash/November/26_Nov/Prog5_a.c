
#include<stdio.h>


extern int a;
extern int b;

void add(int a,int b);

void call() {

	add(a,b);
}
