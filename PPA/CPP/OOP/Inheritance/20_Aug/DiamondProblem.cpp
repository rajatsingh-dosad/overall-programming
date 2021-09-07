
#include <iostream>


class Shashi {

	public:
		Shashi() {
			
			std::cout << "Shashi Constructor" << std::endl;
		}
		
		~Shashi() {
			
			std::cout << "Shashi Destructor" << std::endl;
		}
};

class Core2Web: virtual public Shashi {
	
	public:
		Core2Web() {
			
			std::cout << "Core2Web Constructor" << std::endl;
		}
		
		~Core2Web() {
			
			std::cout << "Core2Web Destructor" << std::endl;
		}
}; 

class Biencaps : virtual public Shashi {

	public:
		Biencaps() {
			
			std::cout << "Biencaps Constructor" << std::endl;
		}
		
		~Biencaps() {
			
			std::cout << "Biencaps Destructor" << std::endl;
		}
};


class Incubator : public Core2Web , public Biencaps {
	
	public:
		Incubator() {
			
			std::cout << "Incubator Constructor" << std::endl;
		}
		
		~Incubator() {
			
			std::cout << "Incubator Destructor" << std::endl;
		}
};

int main() {

	Incubator obj;
	return 0;
}


/*
Ouput without using virtual keyword:
	Shashi Constructor
	Core2Web Constructor
	Shashi Constructor
	Biencaps Constructor
	Incubator Constructor
	Incubator Destructor
	Biencaps Destructor
	Shashi Destructor
	Core2Web Destructor
	Shashi Destructor
*/



/*
Output using virtual keyword:
	Shashi Constructor
	Core2Web Constructor
	Biencaps Constructor
	Incubator Constructor
	Incubator Destructor
	Biencaps Destructor
	Core2Web Destructor
	Shashi Destructor
*/

