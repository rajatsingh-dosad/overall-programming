
#include <iostream>

using namespace std;

void m1() {

	cout << "Outside m1" << endl;
}

class UK {
	
	public:
		void printCountry() {

			cout << "England, Wales, Scottland, Northen Ireland" << endl;
		}
};

int main() {

	UK obj;
	obj.printCountry();
	m1();	
	return 0;
}
