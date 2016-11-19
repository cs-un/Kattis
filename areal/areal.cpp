#include <iostream>
#include <math.h>

int main(void) {
	double a;
	std::cout.precision(20);
    while(std:: cin >> a){
    	std::cout << (sqrt(a) * 4) << std::endl;
    }
    return 0;   
}
