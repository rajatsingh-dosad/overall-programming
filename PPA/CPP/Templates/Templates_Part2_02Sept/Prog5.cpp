
//class Specialization

#include <iostream>
using namespace std;

template<class T>
class Template {

	public:
		Template() {

			cout << "Template Constructor" << endl;
		}
};

template<>
class Template<int> {

	public:
		Template() {

			cout << "Specific Constructor" << endl;
		}
};


int main() {

	Template<char> obj1;
	Template<int> obj2;
	Template<double> obj3;
	return 0;
}
