#include <iostream>

int main(void) {
    int a;
    std::cin >> a; // throw away number of test cases
    while(std:: cin >> a)
    	std::cout << a << " is " << (a % 2 == 0 ? "even" : "odd") << std::endl;
    return 0;   
}
