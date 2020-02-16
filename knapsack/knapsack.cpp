#include <vector>
#include <iostream>
using namespace std;

void knapsackProblem(vector<vector<int>>& items, int capacity) {
  vector<vector<int>> vals{items.size() + 1, vector<int>(capacity + 1, 0)};
	
	for(auto i{0}; i < items.size(); ++i)
	{
		const auto val{items[i][0]};
		const auto w{items[i][1]};
		for(auto j{1}; j < capacity + 1; ++j)
		{
			if(j >= w)
			{
				vals[i + 1][j] = max(vals[i][j], vals[i][j-w] + val);
			}
			else
			{
				vals[i + 1][j] = vals[i][j];
			}
		}
	}
	
	vector<int> sol{};
	for(auto i{(int)items.size()}, c{capacity}; i > 0;)
	{
		if(vals[i][c] == vals[i - 1][c])
		{
			--i;
		}
		else
		{
			c -= items[i - 1][1];
			sol.push_back(i - 1);
			--i;
		}
	}
   cout << sol.size() << "\n";
   for(const auto i : sol)
   {
      cout << i << " ";
   }
   cout << "\n";
}

int main(void) {
   int c, n;
   while(cin >> c >> n)
   {
      vector<vector<int>> items(n, vector<int>(2));
      for(auto i{0}; i < n; ++i)
      {
         cin >> items[i][0] >> items[i][1];
      }
      knapsackProblem(items, c);
   }
   return 0;
}