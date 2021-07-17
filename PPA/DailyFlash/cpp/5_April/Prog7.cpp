
#include <iostream>

using namespace std;

int main() {

	int i = -30, j=20, k=1,m;
	m = ++i && ++j && --k;

	cout << "Value of i,j,k & m: " << i << " " << j << " " << k << " " << m << endl;
	return 0;
}
