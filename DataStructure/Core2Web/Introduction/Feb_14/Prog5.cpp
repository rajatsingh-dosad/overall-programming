

#include <iostream>

struct Player {

	char pName[20] = "MSD";
	int jerNo = 7;
	float sal = 570.00;

};

void passCric(Player* cric) {

	std::cout << cric->pName << std::endl;
	std::cout << cric->jerNo << std::endl;
	std::cout << cric->sal << std::endl;
}

int main() {
	
	Player *cric  =new Player();

	passCric(cric);
	return 0;
}
