#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int left[n];
	int right[n];
	int nums[n];
	int max;
	std::cin >> max;
	left[0] = max;
	nums[0] = max;
	for(int i = 1; i < n; ++i){
		int num;
		std::cin >> num;
		if(num > max)
			max = num;
		left[i] = max;
		nums[i] = num;
	}
	int min = nums[n-1];
	right[n-1] = min;
	for(int c = n-2; c >= 0; --c){
		if(nums[c] < min)
			min = nums[c];
		right[c] = min;
	}
	int pivots = 0;
	for(int x = 0; x < n; ++x)
	{
		if(left[x] <= nums[x] && right[x] >= nums[x])
			pivots++;
	}
	std::cout << pivots;
	return 0;
}
