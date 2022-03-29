
//Sum of numbers from 1 to 5

#include <stdio.h>

//Normal iterative way
int sum() {

	int add = 0;

	for(int i=1;i<=5;i++) {

		add = add + i;
	}

	return add;
}

void main() {

	int ans = sum();
	printf("The sum is: %d\n",ans);
}


// To solve a problem using recursion first write the normal iterative way of the code and then convert it in recursive way.
// To make a iterative code to recursive
// First remove all the variable that are going to be initialzed again we can either write them globally or can write them as static
// Then condition in for/while loop will be in the if() condition in recursive way
//
// The above code can be written in recursive way as below: 


/*
int sum() {

	static int i = 1;	//Instead of writing the variable global we write it static as static is initialized only once
	static int add = 0;

	if(i<=5) {

		add = add + i;
		i++;
		sum();
	}
	else
		return add;
}

void main() {

	int ans = sum();

	printf("%d\n",ans);
}

*/




//Optimized above code in terms of number of lines
/*int sum(int x) {

        if(x==1)
                return 1;
        return x + sum(x-1);
}

void main() {

        int ans = sum(5);

        printf("The sum is: %d\n",ans);
}
*/
