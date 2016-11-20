#include <iostream>
#include <algorithm>
#include <cmath>
#define M_PI           3.14159265358979323846  /* pi */

int main(void) {
    double a, b;
    std::cout.precision(9);
    while(std:: cin >> a >> b)
    	std::cout << std::fixed << ((pow((a-b),2.0)*M_PI)/((pow(a,2.0)*M_PI)))*100 << std::endl;
    return 0;   
}
