
#include <iostream>

class Parent {

	public:
		Parent() {

			std::cout << "Parent Constructor" << std::endl;
		}

		Parent(Parent& ref) {

			std::cout << "In copy Constructor" << std::endl;
		}
};

int main() {

	Parent obj;

	try {
		std::cout << "In try" << std::endl;
		throw obj;
	}catch(Parent p) {

		std::cout << "In catch" << std::endl;
	}

	std::cout << "End Main" << std::endl;

	return 0;
}
