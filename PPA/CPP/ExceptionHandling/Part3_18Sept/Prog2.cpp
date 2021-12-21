
#include <iostream>

using namespace std;

int main() {

	try {

		cout << "In outer try" << endl;

		try{
			
			cout << "In inner try of try" << endl;
			throw "Exception 1";
		}catch(const char* str) {
			cout << "In inner catch of try" << endl;
		}
		throw "Exception 2";

	}catch(const char* str) {

		cout << "In outer catch " << endl;
		std::cout << str << endl;
	}

	return 0;
}
