
#include <iostream> 

using namespace std;

int main() {

	int x = 3;

	int a = x++ + x++ + ++x;

	cout << "Value of a & x: " << a << " " << x << endl;
	return 0;
}	
