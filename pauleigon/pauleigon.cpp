#include <iostream>

int main(void) {
	int n, p, q;
	while(std:: cin >> n >> p >> q)
	{
		std::cout << ((p+q)/n % 2 == 0 ? "paul" : "opponent");
	}
	return 0;   
}
