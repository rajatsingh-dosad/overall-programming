
#include <iostream>

void fun(int x, int y) {

	std::cout << "Start fun" << std::endl;
	if(y==0)
		throw "Exception occured in fun()";
	else
		std::cout << x/y << std::endl;
	std::cout << "End fun" << std::endl;
}

int main() {
		
	int x,y;

	std::cout << "Enter the number: ";
	std::cin >> x >> y;


	std::cout << "Start Main" << std::endl;
	try {
		fun(x,y);
	}catch(const char *s) {
		std::cout << s << std::endl;
		
	}

	std::cout << "End Main" << std::endl;

	return 0;
}
