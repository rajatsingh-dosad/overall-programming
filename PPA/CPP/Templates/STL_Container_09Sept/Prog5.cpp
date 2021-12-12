
#include <iostream>
#include <set>

int main() {

	std::multiset<int,std::greater<int>> s1 = {30,10,20,50,40,10};

	for(auto itr = s1.begin();itr!=s1.end();itr++) {

		std::cout << *itr << " ";
	}
	
	std::cout << "\n";

	auto ptrval = s1.find(10);
	s1.erase(ptrval);

	for(auto itr = s1.begin();itr!=s1.end();itr++) {

		std::cout << *itr << " ";
	}

	std::cout << "\n";


	return 0;
}
