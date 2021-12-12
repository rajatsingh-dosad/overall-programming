
#include <iostream>
#include <queue>

void showQueue(std::priority_queue<int> q) {
	
	while(!q.empty()) {

		std::cout << q.top() << std::endl;
		q.pop();
	}
}

int main() {

	std::priority_queue<int> q;
	q.push(10);
	q.push(40);
	q.push(50);
	q.push(20);
	q.push(30);

	showQueue(q);

	return 0;
}
