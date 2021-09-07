
#include <iostream>

class Core2Web {

	public:
		int x = 10;

		Core2Web() {
			
			std::cout << "Constructor" << std::endl;
		}

		void disp() {

			std::cout << x << std::endl;
		}

		~Core2Web() {

			std::cout << "Destructor" << std::endl;
		}
};

class Incubator : public Core2Web {

	public:
		int y = 20;

		Incubator() {
			
			std::cout << "Child Constructor" << std::endl;
		}

		void dispChild() {

			std::cout << x << std::endl;
			std::cout << y << std::endl;
		}

		~Incubator() {

			std::cout << "Child Destructor" << std::endl;
		}
	
};

int main() {

	Incubator obj;
	obj.disp();
	obj.dispChild();

	Core2Web obj2;
	obj2.disp();
	
	//obj2.dispChild();	//Error - since we can't call function of child using parent's object

	return 0;
}


/*
 
OUTPUT:
	Constructor
	Child Constructor
	10
	10	
	20
	Constructor
	10
	Destructor
	Child Destructor
	Destructor

*/
