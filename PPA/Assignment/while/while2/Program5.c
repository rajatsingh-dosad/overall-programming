/*Program 5. Write a C Program, that prints square of odd numbers and cube of even
numbers. Take lower bound & upper bound of numbers range from user.
Input:
Enter Lower bound of range: 1
Enter Upper bound of range: 5
Output: 1 4 27 16 125   */


#include<stdio.h>

void main() {

	int start_num;
	int end_num;

	printf("Enter Lower bound of range: ");
	scanf("%d",&start_num);			//inputting startin number

	printf("Enter Upper bound of range: ");
	scanf("%d",&end_num);			//inputting ending number

	while(start_num<=end_num) {		//condition

		if(start_num%2!=0) 		//if odd square it
			printf("%d ",start_num*start_num);
		else							//else if even cube it
			printf("%d ",start_num*start_num*start_num);
		start_num++;			//increment
	}
	printf("\n");
}


//In question they have given "square of odd" and "cube of even" but in their output have done reverse of it"square of even" and "cube of odd".
