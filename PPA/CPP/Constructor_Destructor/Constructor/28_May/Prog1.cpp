
#include <iostream>
using namespace std;

class ThisPointerDemo  {

	int numSales = 0;
	
public:
	ThisPointerDemo()  {

		cout << "Shear Driving Pleasure" << endl;
		cout <<numSales <<endl;
	}

	ThisPointerDemo(int numSales) {

		this->numSales = numSales;
		cout << "In para" << endl;
		cout << numSales <<endl;
		ThisPointerDemo();

	}

	void display() {

		cout << numSales << endl;
	}
};

int main() {

	ThisPointerDemo obj;
	ThisPointerDemo *obj2 = new ThisPointerDemo(75);

	//obj.display();
	//obj2->display();
	return 0;
}
