
// Whenever final specifier is written infront of a function or a class than that function or class cannot be overrided

#include <iostream>
using namespace std;

class Parent {

	public:
		virtual void buyGold() final {
			
			cout << "Gold from PNG" << endl;
		}
};

class Child : public Parent {

	public:
		void buyGold() override {

			cout << "Gold from PNG&Sons" << endl;
		}
};

int main() {
	
	Parent *p = new Child();
	p-> buyGold();
	return 0;
}
