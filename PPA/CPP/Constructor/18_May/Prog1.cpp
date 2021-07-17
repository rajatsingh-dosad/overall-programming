
#include <iostream>
using namespace std;

class BigBazaar {

	int noOfProd = 1000;

	public: 
		BigBazaar() {

			cout << "No arg" << endl;
		}

		BigBazaar(int list) {

			cout << " Parameterized COns" << endl;
		}

		void bill()  {

			cout << "Pay the bill" << endl;
		}
};

int main() {

	BigBazaar obj;
	BigBazaar obj1(10);

	obj.bill();
	obj1.bill();
	return 0;
}

