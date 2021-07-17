
#include <iostream>
using namespace std;

int main() {

	int x;
	int y;

	cout << "Enter values for x and y: ";
	cin >> x >> y;

	int z = (x<y) ? x : y;

	cout << z << endl;
	
	return 0;
}
