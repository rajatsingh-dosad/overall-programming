
#include <iostream>
using namespace std;

class ObjectFree {

	int x = 10;
	
	public:
		ObjectFree() {

			cout << "Constructor" <<endl;
		}

		void fun() {

			cout << "In fun" << endl;
			gun();
		}

		void gun() {

			cout << "In gun" << endl;
		}
};

int main() {
	
	ObjectFree obj1;
	ObjectFree *obj2 = new ObjectFree();
	obj1.fun();
	obj2->fun();
	return 0;
}
