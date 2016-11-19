#include <iostream>
#include <string.h>

int main(void) {
	std::string a, b;
    while(std:: cin >> a >> b)
    	std::cout << (b.length()>a.length() ? "no" : "go") << std::endl;
    return 0;   
}
