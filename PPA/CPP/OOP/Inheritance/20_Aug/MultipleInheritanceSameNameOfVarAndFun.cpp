
// Same name of variable and function

#include <iostream>

class Core2Web {
	

	public:
		
		int emp = 1;
		
		void motive() {
			
			std::cout << "Core Programming Classes" << std::endl;
			std::cout << "Employee: " << emp << std::endl;
		}
};

class Biencaps {
	

	public:
		int emp = 27;
		
		void motive() {

			std::cout << "Building Innovative Softwares" << std::endl;
			std::cout << "Employee: " << emp << std::endl;
		}

};

class Incubator :public Biencaps, public Core2Web {

	public:

		void dispMembers() {

			std::cout << Core2Web::emp << std::endl;
			std::cout << Biencaps::emp << std::endl;
		}
};

int main() {

	Incubator obj;
	obj.Core2Web::motive();
	obj.Biencaps::motive();

	obj.dispMembers();
	return 0;
}
