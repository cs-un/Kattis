#include <iostream>

int main(void){
	int stones;
	std::cin >> stones;
	std::cout << (stones % 2 == 1 ? "Alice" : "Bob") << std::endl;
	return 0;
}