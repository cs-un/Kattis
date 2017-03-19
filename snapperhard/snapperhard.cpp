#include <iostream>

int main(void) {
	int t;
	std::cin >> t;
	for(int i = 1; i <= t; ++i)
	{
		int n, k;
		std::cin >> n >> k;
		std::cout << "Case #" << i << ": ";
		int r1 = ((1<<n) - 1); // bitshift to get bits for the snappers (when they're turned on)
		std::cout << ((r1 & k) == r1 ? "ON" : "OFF") << std::endl; // do logical and with k to see if result is snappers turnedon
	}
	return 0;   
}