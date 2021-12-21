
// Opening file using constructor

#include <iostream>
#include <fstream>

int main() {
	
	std::ofstream outfile("Core2web.txt");

	outfile << "CPP and DS Batch";

	outfile.close();
	return 0;
}
