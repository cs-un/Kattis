#include <iostream>

int main(void) {
	int count = 0;
	int n;
	std::cin >> n;
	for(int i = 0; i < n; ++i)
	{
		int d;
		std::cin >> d;
		if(d<0)
			count++;
	}
	std::cout << count << std::endl;
	return 0;   
}
