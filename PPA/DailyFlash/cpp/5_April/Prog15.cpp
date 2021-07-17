
#include <iostream> 

using namespace std;

int main() {

	int a = 3, b = 4, c= 0;

	int z = a && b && ++c;

	cout << "Value of z: " << z << endl;
	return 0;
}
