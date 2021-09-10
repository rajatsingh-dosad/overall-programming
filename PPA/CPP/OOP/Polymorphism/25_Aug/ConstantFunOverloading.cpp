
#include <iostream>

/*
class FunOverload {

	public:
		void fun(int x) {

			std::cout << "int" << std::endl;
		}

		void fun(const int x) {

			std::cout << "int-const" << std::endl;
		}
};

int main() {

	FunOverload obj;
	obj.fun(10);
	return 0;
}

//Error : void FunOverload::fun(int) cannot be overloaded
*/



//Const with pointer

/*
class FunOverload {

	public:
		void fun(int* x) {

			std::cout << "int" << std::endl;
		}

		void fun(const int* x) {

			std::cout << "int-const" << std::endl;
		}
};

// int main() {

// 	FunOverload obj;
// 	int x = 10;
// 	obj.fun(&x);
// 	return 0;
// }

// o/p: int

int main() {

	FunOverload obj; 
	const int x = 10;
	obj.fun(&x);
	return 0;
}

//o/p : int-const

*/



// reference with const

/*
class FunOverload {

	public:
		void fun(int& x) {

			std::cout << "int" << std::endl;
		}

		void fun(const int& x) {

			std::cout << "int-const" << std::endl;
		}
};

// int main() {

// 	FunOverload obj;
// 	int x = 10;
// 	obj.fun(x);
// 	return 0;
// }

// o/p: int 

int main() {

	FunOverload obj;
	const int x = 10;
	obj.fun(x);
	return 0;
}

//o/p: int-const

*/



//Function const

class FunOverload {

	public:
		void fun(int x) const  {
			std::cout << "const" << std::endl;
		}

		void fun(int x) {
			std::cout << "Normal"  << std::endl;
		}
};

// int main() {

// 	FunOverload obj;
// 	int x =10;
// 	obj.fun(x);
// 	return 0;
// }

//o/p: Normal

int main() {

	const FunOverload obj;
	int x = 10;
	obj.fun(x);
	return 0;
}

//o/p: const 