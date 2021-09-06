
#include <iostream>

class Player {
	
	public:

		Player() {
			
			std::cout << "Parent constructor" << std::endl;
		}
		
		void disp() {

			std::cout << "In display function" << std::endl;
		}

		~Player() {

			std::cout << "In parent destructor" << std::endl;
		}
};


class Cricket : public Player {

	public:
		Cricket() {

			std::cout << "Child's constructor" << std::endl;
		}

		~Cricket() {

			std::cout << "In child destructor" << std::endl;
		}

};

int main() {

	Player obj1;
	Cricket obj2;

	return 0;
}

