
#include <iostream>
using namespace std;

class ObjectFree {

	int x = 10;
	
	public:
		ObjectFree() {

			cout << "No-arg Constructor" <<endl;
		}
		
		ObjectFree(int val) {

			cout << "Parameterized Constructor" <<endl;
		}

		void fun() {

			cout << "In fun" << endl;
			ObjectFree *obj3 = new ObjectFree(20);
			ObjectFree obj4;
			gun();
		}

		void gun() {

			cout << "In gun" << endl;
			ObjectFree *obj5 = new ObjectFree(30);
			ObjectFree obj6;
		}
};

int main() {
	
	ObjectFree obj1;
	ObjectFree *obj2 = new ObjectFree(10);
	obj1.fun();
	obj2->fun();
	return 0;
}
