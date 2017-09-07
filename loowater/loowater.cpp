#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	int n, m;
	while(std::cin >> n >> m)
	{
		if(!(n | m))
			break;
		std::vector<int> heads, knights;
		for(int i = 0; i < n; ++i)
		{
			int head;
			std::cin >> head;
			if(m >= n) 
				heads.push_back(head); // if m < n, then Loowater is doomed.
		}
		for(int j = 0; j < m; ++j)
		{
			int height;
			std::cin >> height;
			if(m >= n) 
				knights.push_back(height);
		}
		if(m < n){
			std::cout << "Loowater is doomed!" << std::endl;
			continue;
		}
		std::sort(heads.begin(), heads.end());
		std::sort(knights.begin(), knights.end());
		int sum = 0;
		int h = 0;
		for(int k = 0; h < heads.size() && k < knights.size(); ++k)
		{
			if(heads[h] <= knights[k])
			{
				sum += knights[k];
				++h;
			}
		}
		if(h == heads.size()){
			std::cout << sum << std::endl;
			continue;
		}
		std::cout << "Loowater is doomed!" << std::endl;
	}
}
