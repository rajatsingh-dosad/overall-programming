
#include <iostream>
using namespace std;

template<class T, class U>
class Template {

	T data;
	U floatData;
	public:
		T display() {

			return data;
		}
};

int main() {
	
	Template<int,double> obj1;
	std::cout << sizeof(obj1) << std::endl;	//16
	
	Template<char,float> obj2;	
	std::cout << sizeof(obj2) << std::endl;	//8
	
	return 0;
}
