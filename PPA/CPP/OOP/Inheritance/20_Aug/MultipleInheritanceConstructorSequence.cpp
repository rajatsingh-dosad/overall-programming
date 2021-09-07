
// Constructor Sequence

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

class Biencaps {

	public:
		Biencaps() {

			std::cout << "BiencapsConstructor" << std::endl;
		}
		
		~Biencaps() {

			std::cout << "Biencaps Destructor" << std::endl;
		}

};

class Incubator : public Core2Web, public Biencaps {

	public:
		Incubator() {

			std::cout << "Incubator Constructor" << std::endl;
		}
		
		~Incubator() {

			std::cout << "Incubator Destructor" << std::endl;
		}
};

int main() {

	Incubator obj;
	return 0;
}
