
#include <iostream>
#include <list>

void showList(std::list<std::string> lst) {

	for(auto itr = lst.begin();itr!=lst.end();itr++) {
		std::cout << *itr << " ";
	}
	std::cout << "\n";
}

int main() {

	std::list<std::string> l1 = {"Apple","Amazon","Microsoft","Google","Facebook"};

	showList(l1);
	
	//push_back
	l1.push_back("Uber");
	showList(l1);

	//push_front
	l1.push_front("Adobe");
	showList(l1);

	//pop_back
	l1.pop_back();
	showList(l1);
	
	//pop_front
	l1.pop_front();
	showList(l1);

	//front
	std::cout << l1.front() << std::endl;
	
	//back
	std::cout << l1.back() << std::endl;

	//insert
	l1.insert(l1.begin(),"Adobe");
	showList(l1);

	//erase
	l1.erase(l1.begin());
	showList(l1);

	//reverse
	l1.reverse();
	showList(l1);

	//sort
	l1.sort();
	showList(l1);

	//Creating new list
	std::list<std::string> l2 = {"10","20","30","40","50"};
	
	//merge
	l1.merge(l2);
	showList(l1);



	return 0;
}
