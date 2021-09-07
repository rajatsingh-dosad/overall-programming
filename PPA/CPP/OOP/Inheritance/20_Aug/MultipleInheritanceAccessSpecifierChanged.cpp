
// Access Specifier changed

#include <iostream>

class Core2Web {
	
	int emp = 1;

	public:
		Core2Web() {

			std::cout << "C2W Constructor" << std::endl;
		}
		
		~Core2Web() {

			std::cout << "C2W Destructor" << std::endl;
		}

		void motive() {
			
			std::cout << "Core Programming Classes" << std::endl;
			std::cout << "Employee: " << emp << std::endl;
		}
};

class Biencaps {
	
	int numEmp = 27;

	public:
		Biencaps() {

			std::cout << "Biencaps Constructor" << std::endl;
		}
		
		~Biencaps() {

			std::cout << "Biencaps Destructor" << std::endl;
		}

		void agenda() {

			std::cout << "Building Innovative Softwares" << std::endl;
			std::cout << "Employee: " << numEmp << std::endl;
		}

};

class Incubator :public Biencaps,protected Core2Web {

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
	obj.motive();	//Error
	obj.agenda();
	return 0;
}
