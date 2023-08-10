#include<iostream>
#include<queue>

int main() {
	std::priority_queue<int, std::vector<int>, std::greater<int> >myPrQ;

	myPrQ.push(4); 
	myPrQ.push(23);
	myPrQ.push(5);
	myPrQ.push(8);
	myPrQ.push(55);
	myPrQ.push(1);
	myPrQ.push(3);
	myPrQ.push(9);

	while (!myPrQ.empty()) {
		std::cout << myPrQ.top() << std::endl; 
		myPrQ.pop();
	}

	return 0; 
}