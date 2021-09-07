
#include <iostream>

class Core2Web {

	int x = 10;

	public: 
		int y = 20;

		void disp() {

			std::cout << x << std::endl;
			std::cout << y << std::endl;
		}
};

class Incubator : public Core2Web {

	public:
		void dispChild() {
	
			std::cout << x << std::endl;		// Error - x doesn't gets inherited from parent
			std::cout << y << std::endl;		
		}	
};

int main() {

	Core2Web obj1;
	std::cout << obj1.x <<std::endl;			//Error - since x is private it can't be accessed outside the class
	std::cout << obj1.y << std::endl;

	Incubator obj2;
	std::cout << obj2.x <<std::endl;			//Error	- x is called using child's object but x doesn't gets inherited in child
	std::cout << obj2.y << std::endl;

	return 0;
}

//Since x is private we got error at 3 different places
//But as y is public it gets accessed everywhere
