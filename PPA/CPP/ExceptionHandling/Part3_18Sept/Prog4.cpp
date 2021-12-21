
#include <iostream>

using namespace std;

void fun() {

	try {	
		try {
			cout << "In try- fun" << endl;
			throw "Exception by fun";
		}catch(const char* str ) {

			cout << "In catch- fun" << endl;
			cout << str <<endl;
			throw str;
		}

	}catch(const char* str) {

		cout << "In catch- Main" << endl;
		cout << str << endl;
	}
}

int main() {

	fun();

	return 0;
}
