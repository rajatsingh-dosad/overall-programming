
// Iterator

#include <iostream>
#include <vector>

int main() {

	std::vector<int> v = {10,20,30,40,50};

	//std::vector<int>::iterator itr;		//1 way to declare iterator
	//for(auto itr = v.rbegin(); itr!=v.rend();itr++) {	// 2 way to write iterator


	/*
	for(auto itr = v.rbegin(); itr!=v.rend();itr++) {	// normal iterator

		std::cout << *itr << std::endl;
	}
	*/
	
	/*
	for(auto itr = v.cbegin();itr!=v.cend();itr++) {	// constant iterator
		
		std::cout << *itr << std::endl;
	}
	*/

	
	/*
	for(auto itr = v.rbegin(); itr!=v.rend();itr++) {	// reverse iterator
		std::cout << *itr << std::endl;
	}
	*/

	for(auto itr = v.crbegin(); itr!=v.crend();itr++) {	// constant reverse iterator
		std::cout << *itr << std::endl;
	}



	return 0;
}
