
#include <iostream>
#include <cmath>
int main() {

	int num;
	std::cout << "Enter the number: ";
	std::cin >> num;

	try {
		if(num < 0) 
			throw "-ve value entered";
		else
			std::cout << "SquareRoot: " << sqrt(num) << std::endl;
	}catch(const char* s) {

		std::cout << sqrt(-num) << std::endl;

	}
	

	return 0;
}
