
#include <iostream>
#include <deque>
#include <vector>
#include <list>

int main() {
	
	std::vector<int> v1 = {10,20,30,40,50};
	std::list<int> l1 = {100,200,300,400,500};
	std::deque<int> dq = {1000,2000,3000,4000,5000};

	for(auto itr = v1.begin();itr!=v1.end();itr++) {

		std::cout << *itr << std::endl;
	}
	
	//operator[]
	std::cout << v1[2] << std::endl;
	//std::cout << l1[2] << std::endl;	//error
	std::cout << dq[2] << std::endl;
	
	//at()
	std::cout << v1.at(2) << std::endl;
	//std::cout << l1[2] << std::endl;	//error
	std::cout << dq.at(2) << std::endl;

	//front
	std::cout << v1.front() << std::endl;
	std::cout << l1.front() << std::endl;
	std::cout << dq.front() << std::endl;

	return 0;
}
