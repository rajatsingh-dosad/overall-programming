
#include <iostream>
#include <vector>

int main() {
	
	std::vector<int> v;
	std::vector<std::string> v1 = {"Apple","Facebook","Amazon","Netflix","Goole"};

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(40);
	v.push_back(50);
	
	for(int i=0;i<v.size();i++) {
		
		std::cout << v[i] << std::endl;		//[] - operator
	}
	
	for(int i=0;i<v1.size();i++) {
		
		std::cout << v1[i] << std::endl;		//[] - operator
	}

	return 0;
}
