
#include <iostream>

class Core2Web {
	
	public:
		Core2Web() {

			std::cout << "C2W Constructor" << std::endl;
		}

		~Core2Web() {

			std::cout << "C2W Destructor" << std::endl;
		}
};

class Incubator : public Core2Web {
	
	public:
		Incubator() {

			std::cout << "Incubator Constructor" << std::endl;
		}

		~Incubator() {

			std::cout << "Incubator Destructor" << std::endl;
		}

};

class StartUp : public Incubator {

	public:
		StartUp() {

			std::cout << "StartUp Constructor" << std::endl;
		}

		~StartUp() {

			std::cout << "StartUp Destructor" << std::endl;
		}
};

int main() {
	
	StartUp obj;

	return 0;
}
