
#include <iostream>

using namespace std;

class Company {

	int empCnt = 20;

	public :
	Company() {

		cout << "No-arg" << endl;
		cout << empCnt <<endl;
		empCnt++;
		cout << empCnt <<endl;
		Company(10);
	}

	Company(int x) {

		cout << "Para " << endl;
		cout << empCnt << endl;
	}
};

int main() {
	
	Company obj;
}	
