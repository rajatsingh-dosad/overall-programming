
#include <iostream>

using namespace std;

class Company {

	public: 

		Company() {

			cout << "No-arg" << endl;

		}

		Company(int x) {

			cout << "Parameterized" << endl;
		}

		Company(Company obj) {

			cout << "Copy constructor" << endl;
		}
};

int main() {

	int x = 10;
	int *ptr = &x;

	cout << *ptr << endl;
	Company obj1;
	Company obj2(10);

	Company obj3 = obj2; 	
	Company obj4(obj1);
	return 0;
}
