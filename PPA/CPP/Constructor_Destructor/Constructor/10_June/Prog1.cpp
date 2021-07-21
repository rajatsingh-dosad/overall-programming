
#include <iostream>

using namespace std;

int main() {
	
	int x = 10;
	int &ref = x;
	
	cout << ref << endl;

	int y = 20;
	ref = y;
	
	cout << ref << endl;


	return 0;
}
