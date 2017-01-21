#include <iostream>

int main(void){
	int n, t, y, sum = 0;
	std::cin >> n >> t;
	int i = 0;
	while(n-->0)
	{
		std::cin >> y;
		sum+=y;
		if(sum > t){
			break;
		}
		++i;
	}
	std::cout << i;
	return 0;
}