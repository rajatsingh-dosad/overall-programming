
#include <iostream>

class Parent {

	public:
		Parent() {

			std::cout << "Parent Constructor" << std::endl;
		}
};

class Child: public Parent {

	public:
		Child() {

			std::cout << "In child constructor" << std::endl;
		}
};

int main() {

	Parent obj;

	try {
		std::cout << "In try" << std::endl;
		throw obj;
	}catch(Child cobj) {

		std::cout << "In catch - Child" << std::endl;
	}catch(Parent p) {
		
		std::cout << "In catch- Parent " << std::endl;
	}

	std::cout << "End Main" << std::endl;

	return 0;
}
