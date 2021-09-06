
#include <iostream>

class Player {
	
	public:

		Player() {
			
			std::cout << "Parent constructor" << std::endl;
		}
		
		void disp() {

			std::cout << "In display function" << std::endl;
		}
};


class Cricket : public Player {

	public:
		Cricket() {

			std::cout << "Child's constructor" << std::endl;
		}

};

int main() {

	Player obj1;
	Cricket obj2;

	obj1.disp();
	obj2.disp();

	return 0;
}
