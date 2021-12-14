
#include <iostream>

class DivideException {
	
	int x,y;
	//float ans;
	public:
		DivideException(int x,int y) {
			
			std::cout << "In Constructor" << std::endl;
			this->x = x;
			this->y = y;
		}

		void fun() {
			
			try {
				if(y==0) 
					throw "Divide by 0";
				else
					std::cout << x/y << std::endl;
				
			}catch(const char* str) {

				std::cout << "Exception: " << str << std::endl;
			}catch(float f) {

				std::cout << "Exception: " << f << std::endl;
			}
		}
};

int main() {
	
	int x,y;
	std::cout << "Enter the values of x and y: ";
	std::cin >> x >> y;

	DivideException obj(x,y);
	obj.fun();

	std::cout << "End Main" << std::endl;
	return 0;
}
