
#include <iostream>

class Core2Web {

	protected:
		int x = 10;
	
	public: 

		void disp() {

			std::cout << x << std::endl;
		}
};

class Incubator : public Core2Web {

	public:
		void dispChild() {
	
			std::cout << x << std::endl;		
		}	
};

int main() {

	Core2Web obj1;
	std::cout << obj1.x <<std::endl;	//Error - protected variable is not accessible outside the class

	Incubator obj2;
	std::cout << obj2.x <<std::endl;	//Error - protected variable is not accessible outside the class

	return 0;
}

