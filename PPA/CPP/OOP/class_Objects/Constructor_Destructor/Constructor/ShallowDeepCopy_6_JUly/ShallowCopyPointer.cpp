
#include <iostream>

using namespace std;

class ShallowCopy {

	int *ptr;

	public:
		
		ShallowCopy(int p) {
	
			cout << "Parameterized Constructor" << endl;
			ptr = new int;
			*ptr = p;
		}
		
		void setValue(int q) {

			*ptr= q;
		}

		void display() {

			cout << *ptr << endl;
		}
};

int main() {
	
	ShallowCopy obj1(20);
	obj1.display();

	ShallowCopy obj2 = obj1;
	obj2.display();

	obj1.setValue(30);
	obj1.display();
	obj2.display();
	return 0;
}
