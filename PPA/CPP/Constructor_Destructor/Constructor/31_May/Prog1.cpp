
#include <iostream>

using namespace std;

class Demo {

	public :
		Demo(int x) {

			cout << x << endl;
		}

		Demo(char y) {

			cout << y << endl;
		}

};

int main() {
	
	Demo obj1(10.5);
	return 0;
}
