#include <iostream>

int main(void) {
	double p;
    int n;
    std:: cin >> p >> n;
    double tot = 0;
    while(n-->0)
    {
    	double w, l;
    	std::cin >> w >> l;
    	tot+= p*w*l;
    }
    std::cout << std::fixed << tot << std::endl;
    return 0;   
}
