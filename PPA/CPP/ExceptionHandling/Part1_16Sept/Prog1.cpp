
#include <iostream>

int main() {
		
	std::cout << "Start Main" << std::endl;

	try {
		std::cout <<  "In try Block" << std::endl;
		throw 1.5;
	}catch(int) {
		std::cout << "In catch Block" << std::endl;
	}

	std::cout << "End Main" << std::endl;
	return 0;
}
