
#include <iostream>
#include <queue>

void showQueue(std::queue<int> q) {
	
	while(!q.empty()) {

		std::cout << q.front() << std::endl;
		q.pop();
	}
}

int main() {

	std::queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	std::cout << q.size() << std::endl;
	showQueue(q);

	return 0;
}
