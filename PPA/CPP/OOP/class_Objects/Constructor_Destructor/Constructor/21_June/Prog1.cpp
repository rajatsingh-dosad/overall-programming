
#include <iostream>

using namespace std;

	
class Byjus {

	public:
		Byjus() {

			cout << "No arg Constructor" << endl;
		}

		void display(Byjus &obj) {

			cout << "Parameterized Constructor" << endl;
			cout << &obj << endl;
		}


};

int main() {
	
	Byjus obj1;
	Byjus obj2;
	
	obj1.display(obj2);

	cout << &obj2 << endl;
	return 0;
}
