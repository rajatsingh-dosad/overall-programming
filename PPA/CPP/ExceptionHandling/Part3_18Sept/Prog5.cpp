

#include <iostream>

void fun(int x) throw(char){

	try {

		std::cout << "In try" << std::endl;
		if(x==1) 
			throw x;
		else
			throw 'x';
	}catch(int) {
		
		std::cout << "Catch-int" << std::endl;

	}catch(double) {

		std::cout << "Catch-double" << std::endl;
	}
}

int main() {

	int x;
	std::cout << "Enter value: " << std::endl;
	std::cin >> x;
	
	try {
		fun(x);
	}
	catch(char) {

		std::cout << "Catch-char" << std::endl;
	}

	return 0;
}
