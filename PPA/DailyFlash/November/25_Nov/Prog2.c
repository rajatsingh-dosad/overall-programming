
#include<stdio.h>

enum State {Working = 0, Failed, Freezed};

enum State currState = 2;

enum State FindState() {

	return currState;
	
}

int main() {

	(FindState() == Working) ? printf("Working\n") : printf("Not Working\n");

	return 0;
}

/*

	Output: NOt Working
	
	Because FindState() function is returing an enum(i.e currState)
	(FindState() == Working)
	(2 == 0) -> false here "Not Working"
*/
