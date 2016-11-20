#include <iostream>
#include <string>

int main(void){
	int n, x, y;
	std::cin >> x >> y >> n;
	for(int i = 1; i <= n; ++i)
	{
		if(i % x == 0)
			std::cout << "Fizz";
		if(i % y == 0)
			std::cout << "Buzz";
		if(!(i % x ==0 || i % y == 0))
			std::cout << i;
		std::cout << std::endl;
	}
	return 0;
}