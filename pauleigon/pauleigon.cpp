#include <iostream>
#include <string.h>

int main(void) {
	int n, p, q;
	while(std:: cin >> n >> p >> q)
	{
		int rounds = 0;
		rounds += (p+q)/n;
		std::cout << (rots % 2 == 0 ? "paul" : "opponent");
	}
	return 0;   
}
