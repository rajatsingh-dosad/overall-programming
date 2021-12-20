
#include <iostream>

int main() {

	try {
		
		std::cout << "In try" << std::endl;
		throw 10;
	}catch(int) {
		std::cout << "Catch- Int" << std::endl;
	
	}catch(float) {
		std::cout << "Catch- Float" << std::endl;

	}catch(double) {
		std::cout << "Catch- Char" << std::endl;
	}catch(int) {
		
	}catch(...) {

		std::cout << "Catch - Default" << std::endl;
	}
	std::cout << "End of Main" << std::endl;
	return 0;
}
