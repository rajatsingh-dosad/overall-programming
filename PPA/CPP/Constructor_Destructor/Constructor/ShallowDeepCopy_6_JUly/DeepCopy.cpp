
#include <iostream>

using namespace std;

class DeepCopy {

	int *ptr;

	public:
		
		DeepCopy(int p) {
	
			cout << "Parameterized Constructor" << endl;
			ptr = new int;
			*ptr = p;
		}

		DeepCopy(DeepCopy& ref) {
			
			cout << "Copy Constructor" << endl;
			ptr = new int;
			*ptr = ref.getValue();
		}

		int getValue() {

			return *ptr;
		}
		
		void setValue(int q) {

			*ptr= q;
		}

		void display() {

			cout << *ptr << endl;
		}
};

int main() {
	
	DeepCopy obj1(20);
	obj1.display();		//20

	DeepCopy obj2 = obj1;
	obj2.display();		//20

	obj1.setValue(30);
	obj1.display();		//30
	obj2.display();		//20
	return 0;
}
