
#include <iostream>
using namespace std;

class Parent {

	public:
		Parent() {

			cout << "In constructor" << endl;
		}

		Parent(Parent& ref) {

			cout << "In copy constructor" << endl;
		}

		~Parent() {

			cout << "In destructor" << endl;
		}

		void fun() {

			cout << "In fun" << endl;
		}
};

int main() {

	try {
		std::cout << "In try block" << std::endl;
		Parent obj;
		throw obj;
	}catch(Parent p) {
		
		std::cout << "In catch block" << std::endl;
	}

	std::cout << "End of Main" << std::endl;
	return 0;
}
