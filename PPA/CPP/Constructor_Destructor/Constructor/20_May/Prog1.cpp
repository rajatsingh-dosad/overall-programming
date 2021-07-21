
#include <iostream>
using namespace std;

class Company {
	
	int empCnt = 20;
	public :
	Company() {

		cout << "Constructor" <<endl;
	}

	void compInfo() {

		cout << "Biencaps" <<endl;
		cout << empCnt << endl;
	}
};

int main() {

	Company *obj = new Company();
	(*obj).compInfo();
	obj->compInfo();
	return 0;
}
