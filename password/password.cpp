#include <iostream>
#include <iomanip>
#include <algorithm>

int main(void) {
	int n;
	std::cin >> n;
	double tries = 0;
	double arr[n];
	for(int i = 0; i < n; ++i)
	{
		std::string s; 
		double prob;
		std::cin >> s >> prob; //eat up password
		arr[i] = prob;
	}
	std::sort(arr,arr + n, std::greater<double>());
	for(int i = n-1; i >=0; --i)
				tries+=((double)(i+1)*(double)arr[i]);
	std::cout << std::fixed <<  tries;
	return 0;   
}