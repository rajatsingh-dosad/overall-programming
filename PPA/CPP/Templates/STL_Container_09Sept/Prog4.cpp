
#include <iostream>
#include <set>

int main() {

	std::set<int,std::greater<int>> s1 = {30,10,20,50,40,10};

	for(auto itr = s1.begin();itr!=s1.end();itr++) {

		std::cout << *itr << std::endl;
	}


	return 0;
}
