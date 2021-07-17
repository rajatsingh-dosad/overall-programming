

#include<stdio.h>

void main() {

	int num=76;
	if(num%2 ==0){						//here condition is true so it
		printf("%d is divisible by 2\n",num);		//prints and check the next condition
		if(num%3 == 0){					//here condition is false so it skips the printf statement 
			printf("%d is divisible by 3\n",num);
			if(num%5==0){
				printf("%d is divisible by 5\n",num);
			}else {
				printf("%d is not divisible by 5\n",num);
				}
		}else{
			printf("%d is not divisible by 3\n",num);//prints the statement
		}
	}
	else{
		printf("%d is not divisible by 2\n",num);
	}
}

