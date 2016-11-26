#include <iostream>
#include <bitset>

int main(void) {
	std::bitset<42> nums;
	int a;
    while(std:: cin >> a)
    	nums.set(a%42);
    std::cout << nums.count();
    while(true);
    return 0;   
}