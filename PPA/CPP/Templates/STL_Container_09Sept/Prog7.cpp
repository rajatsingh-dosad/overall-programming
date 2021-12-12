
#include <iostream>
#include <stack>

void showStack(std::stack<int> stk) {

	while(!stk.empty()) {

		std::cout << stk.top() << std::endl;
		stk.pop();
	}
}

int main() {

	std::stack<int> s;

	s.push(10);
	s.push(20);
	s.push(40);
	s.push(30);
	s.push(50);

	showStack(s);
	return 0;
}

