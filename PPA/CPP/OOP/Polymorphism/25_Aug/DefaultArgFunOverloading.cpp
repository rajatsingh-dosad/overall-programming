
#include <iostream>

class FunOverload {

	public:
		void fun(int x) {

			std::cout << "int" << std::endl;
		}

		void fun(int x, float y = 20.5) {

			std::cout << "int-float" << std::endl;
		}
};

int main() {

	FunOverload obj;
	obj.fun(10);	//Error: call of overloaded 'fun(int)' is ambiguous
	return 0;
}
