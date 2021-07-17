#include<stdio.h>

typedef struct Result{

	int noOfSub;
	char grade;
	float percentage;

}result;

void main() {

	result s1 = {5,'A',85.63};
	result s2 = {5,'B',74.56};
	result s3 = {5,'B',74.56};

	//comparing s1 and s2
	if(s1.noOfSub == s2.noOfSub) {

		if(s1.grade == s2.grade){

			if(s1.percentage == s2.percentage)
				printf("Objects s1 and s2 are equal\n");

			else
				printf("Objects s1 and s2  are not equal\n");

		}

	}

	//comparing s1 and s3
	if(s1.noOfSub == s3.noOfSub) {

		if(s1.grade == s3.grade){

			if(s1.percentage == s3.percentage)
				printf("Objects s1 and s3 are equal\n");

			else
				printf("Objects s1 and s3  are not equal\n");

		}

	}

	//comparing s2 and s3
	if(s2.noOfSub == s3.noOfSub) {

		if(s2.grade == s3.grade){

			if(s2.percentage == s3.percentage)
				printf("Objects s2 and s3  are equal\n");

			else
				printf("Objects s2 and s3  are not equal\n");

		}

	}
		
		
	
}


