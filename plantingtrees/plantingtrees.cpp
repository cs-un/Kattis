#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void){
	int q;
	int i;
	cin >> q;
	vector<int> seedlings;
	for(int j = 0; j < q; ++j)
	{
		cin >> i;
		seedlings.push_back(i);
	}
	sort(seedlings.begin(), seedlings.end(), std::greater<int>());
	int pos = 1;
	int max = 0;
	for(int i : seedlings)
	{
		if(max < (pos + i + 1))
			max = pos + i + 1;
		pos++;
	}
	cout << max;
	return 0;
}
