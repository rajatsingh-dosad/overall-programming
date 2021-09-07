
#include <iostream>

class Core2Web {
	
	int x = 10;

	public:
		void disp() {
			
			std::cout << x << std::endl;
		}
};

class Incubator : public Core2Web {
	
	int x = 20;

	public: 
		void disp() {

			std::cout << x << std::endl;
		}

};

int main() {

	
	Incubator obj;
	obj.disp();
	
	Core2Web obj1;
	obj1.disp();
	return 0;
}
