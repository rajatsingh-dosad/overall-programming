

#include <iostream>

//In C we cannot initialize data members while declaring of structure becoz it doesn't get memory. Structure is present in TEXT section.
//But in CPP we can initialize data members while declaring of structure becoz?


struct Player {

	char pName[20] = "MSD";
	int jerNo = 7;
	float sal = 570.00;

};

void passCric(Player cric) {

	std::cout << cric.pName << std::endl;
	std::cout << cric.jerNo << std::endl;
	std::cout << cric.sal << std::endl;
}

int main() {
	
	Player cric;

	passCric(cric);
	return 0;
}
