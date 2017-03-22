#include <iostream>
#include <vector>
int main() {
	int n;
	while(std::cin >> n)
	{
		if(n==0)
			break;
		std::vector<int> sequences[n];
		int values[n];
		for(int i = 0; i < n; ++i)
		{
			int in;
			std::cin >> in;
			values[i] = in;
		}
		int mmax = 1, mmaxi = 0, mmin = 0;
		sequences[0].push_back(values[0]);
		for(int i = 1; i < n; ++i)
		{
			int max = 1;
			int maxk = i;
			for(int k = i-1; k >= 0; --k)
			{
				if(values[k] < values[i] && sequences[k].size() + 1 > max)
				{
					max = sequences[k].size() + 1;
					maxk = k;
				}
			}
			sequences[i] = sequences[maxk];
			sequences[i].push_back(values[i]);
			if(max > mmax)
			{
				mmax = max;
				mmin = i;
			}
			else if(max >= mmax)
			{
				mmax = max;
				if(values[mmin] > values[i])
					mmin = i;
			}
		}

		std::cout << mmax ;
		for (std::vector<int>::iterator it = sequences[mmin].begin() ; it != sequences[mmin].end(); ++it)
			std::cout << ' ' << *it;
		std::cout << std::endl;
	}
	return 0;
}
