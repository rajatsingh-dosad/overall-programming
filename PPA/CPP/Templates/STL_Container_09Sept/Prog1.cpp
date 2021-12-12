
#include <iostream>
#include <vector>

void showVector(std::vector<int> vec) {

	for(auto itr = vec.begin();itr!=vec.end();itr++) {

		std::cout << *itr << " ";
	}

	std::cout << "\n";
}

int main() {

	std::vector<int> v = {10,20,30,40,50};
	
	//push_back
	v.push_back(60);
	showVector(v);

	//pop_back
	v.pop_back();
	showVector(v);

	//assign
	//v.assign(2,50);		
	//showVector(v);
	

	//insert
	v.insert(v.begin(),70);
	showVector(v);

	//erase
	v.erase(v.begin());
	showVector(v);

	//creating new vector
	std::vector<int> v1;
       	v1.assign(5,55);
	showVector(v1);

	//swap
	v.swap(v1);
	std::cout << "Vector v : " ;
	showVector(v);
	std::cout << "Vector v1 : ";
	showVector(v1);

	//clear
	v.clear();
	showVector(v);
	
	//front
	std::cout << v1.front() << std::endl;
	
	//back
	std::cout << v1.back() << std::endl;

	//data
	int *ptr= v1.data();
	std::cout << *ptr << std::endl;

	//at
	std::cout << v1.at(3) << std::endl;

	//reference operator[g]
	std::cout << v1[3] << std::endl;

	//size
	std::cout << v1.size() << std::endl;

	//capacity
	std::cout << v1.capacity() << std::endl;

	return 0;
}
