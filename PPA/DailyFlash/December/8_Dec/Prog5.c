
#include<stdio.h>

struct College {

	struct ComputerDept {

		int totalStudents;
		float passingPercentage;
	}cp;

	struct ItDept {

		int totalStudents;
		float passingPercentage;
	}it;

};

void computerInfo(struct ComputerDept obj1) {
	
	printf("Total number of students in computer department are: %d\n",obj1.totalStudents);
	printf("Passing percentage of Computer department is : %.2f\n",obj1.passingPercentage);
}

void itInfo(struct ItDept obj2) {

	printf("Total number of students in IT department are: %d\n",obj2.totalStudents);
	printf("Passing percentage of IT department is : %.2f\n",obj2.passingPercentage);
}

void main() {
	
	struct College Rmd = {{250,82.5},{180,88.6}};
	
	computerInfo(Rmd.cp);
	itInfo(Rmd.it);
}
