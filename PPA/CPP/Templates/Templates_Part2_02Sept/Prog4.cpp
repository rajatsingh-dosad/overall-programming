
//Template Specialization


#include <iostream>
using namespace std;


template<typename T>

void fun(T x) {

	cout << "Template" << endl;
}

void fun(int x) {

	cout << "Integer Specific" << endl;
}

template<>
void fun(int x) {
	cout << "Specialization" << endl;
}

int main() {

	fun<int>(10);
	fun<double>(10.5);
	return 0;
}
