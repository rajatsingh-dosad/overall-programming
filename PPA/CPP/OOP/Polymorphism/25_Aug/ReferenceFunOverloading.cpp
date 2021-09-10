
#include <iostream>

class FunOverload {

	public:
		void fun(int x) {

			std::cout << "int" << std::endl;
		}

		void fun(int& x) {

			std::cout << "int-ref" << std::endl;
		}
};

int main() {

	FunOverload obj;
	int x = 10;
	obj.fun(x);
	return 0;
}
