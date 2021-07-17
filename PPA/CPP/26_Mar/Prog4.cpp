
#include <iostream>
using namespace std;

int main() {

	int x,y = 10;

	int ans = ++x || (++x && ++y);

	cout << ans << endl;
	cout << x << endl;
	cout << y << endl;

}
