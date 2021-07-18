
#include <iostream>

int main() {

	int x = 10;
	int &y = x;

	std::cout << x <<" "<<  y << std::endl;
	std::cout << &x <<" "<<  &y << std::endl;
	
	y = 30;

	std::cout << x <<" "<<  y << std::endl;
	
	return 0;
}
