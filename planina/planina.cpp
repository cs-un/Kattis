#include <iostream>

int main(void) {
	int n;
	std::cin >> n;
	int x = 2;
	while(n--)
		x += x - 1;
	std::cout << x * x << std::endl;
}
