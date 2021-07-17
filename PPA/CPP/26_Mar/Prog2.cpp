
#include <iostream>

using namespace std;

int main() {
	
	int x = 10;
	int y = 20;

	int z = (++x,y++);

	cout << x << "\n" << y << "\n" << z << endl;

	return 0;
}
