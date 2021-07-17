
#include <stdio.h>

struct Marks {

	int roll_no;
	char name[20];
	int chem_marks;
	int maths_marks;
	int phy_marks;
};

void main() {

	struct Marks stud1 = {10,"Rajat",87,82,79};
	struct Marks stud2 = {11,"Rahul",90,75,79};
	struct Marks stud3 = {12,"Rohan",77,92,89};
	struct Marks stud4 = {13,"Priyanshu",88,90,95};
	struct Marks stud5 = {14,"Shruti",92,88,79};

	struct Marks arr[] = {stud1,stud2,stud3,stud4,stud5};

	for(int i=0;i<5;i++) {

		int sum = arr[i].chem_marks + arr[i].maths_marks + arr[i].phy_marks;
		float per = (sum*100)/300;

		printf("%s got %.2f percent.\n",arr[i].name,per);
	}
}
