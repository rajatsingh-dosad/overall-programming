

// Public Inheritance

#include <iostream>

class Core2Web {

	int x = 10;

	protected: 
		int y = 20;

	public:
		int z = 30;
};

class Incubator : public Core2Web {

	public:
		void disp() {
			
			std::cout << x << std::endl;	//Error
			std::cout << y << std::endl;
			std::cout << z << std::endl;
		}
};

int main() {

	Incubator obj;
			
	std::cout << obj.x << std::endl;	//Error
	std::cout << obj.y << std::endl;	//Error
	std::cout << obj.z << std::endl;
	return 0;
}
