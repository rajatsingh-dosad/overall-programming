
// In cpp we can only use covariant return type only when we returning them as pointer or reference

#include <iostream>
using namespace std;

class PNG {
	
};

class PNGSons: public PNG {

	
};

class Parent {

	PNG obj;
	public:
		virtual PNG* buyGold() {
			
			cout << "Gold from PNG" << endl;
			return &obj;
		}
};

class Child : public Parent {

	PNGSons obj;
	public:
		PNGSons* buyGold() override {

			cout << "Gold from PNG&Sons" << endl;
			return &obj;
		}
};

int main() {
	
	Parent *p = new Child();
	p-> buyGold();
	return 0;
}
