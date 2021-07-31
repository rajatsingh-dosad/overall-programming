
//Difference between instance variable and static variable

#include <iostream>

void fun1() {

	// instance variable
	int x = 10;
	x++;
	std::cout << x << std::endl;
}

void fun2() {

	//static variable
	static int x = 10;
	x++;
	std::cout << x << std::endl;
}

int main() {
	
	std::cout << "Variable is Instance: " << std::endl;
	for(int i=0;i<3;i++) {

		fun1();
	}

	std::cout << "Variable is Static: " << std::endl;
	for(int i=0;i<3;i++) {
		fun2();
	}

	return 0;
}


/*********Output**********

	Variable is Instance 
	11
	11
	11

	Variable is Static
	11
	12
	13

	//Non-static variable: Since memory gets allocated inside the function, variable is initialized everytime fun1 stack frame is pushed
	//Static variable: Since static variable are initialized only once and they get memory in the data segment the line 'static int x = 10' is completely ignored when 
	  fun2() stack frame is pushed second time and execution directly start from line 'x++' and forth.
*/