
#include <iostream>

using namespace std;

void fun() {

	try {
		cout << "In try- fun" << endl;
		throw "Exception by fun";
	}catch(const char* str ) {
			
		cout << "In catch- fun" << endl;
		cout << str <<endl;
		throw str;
	}
}

int main() {

	try {

		cout << "IN try- Main" << endl;
		fun();
	}catch(const char* str) {

		cout << "In catch- Main" << endl;
		cout << str << endl;
	}

	return 0;
}
