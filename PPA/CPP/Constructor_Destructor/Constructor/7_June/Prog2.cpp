
#include <iostream>

using namespace std;

int main() {
	
	int x = 10;

	int &y = x;

	cout << x << " " << y << endl;
		
	x++;
	
	cout << x << " " << y << endl;

	cout << &x << " " << &y << endl;

	return 0;
}
