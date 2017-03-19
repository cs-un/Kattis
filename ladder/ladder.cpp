#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

int main(void) {
	int h, v;
	std::cin >> h >> v;
	std::cout << ceil(h/(sin(v*M_PI/180)));
	return 0;   
}