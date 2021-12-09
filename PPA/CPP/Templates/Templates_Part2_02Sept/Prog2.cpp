
#include <iostream>
using namespace std;

template<class T>
class Template {

	T data;
	public:
		T display() {

			return data;
		}
};

int main() {
	
	Template<int> obj;
	std::cout << sizeof(obj) << std::endl;	//4
	
	Template<double> obj;	
	std::cout << sizeof(obj) << std::endl;	//8
	
	return 0;
}
