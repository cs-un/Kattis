#include <iostream>
#include <string>
#include <cmath>
int main() {
	int w, n;
	int i = 1;
	while(std::cin >> w >> n)
	{
		if(!(w | n))
			break;
		std::string word[n];
		double occurences[n];
		double max = 0;
		for(int c = 0; c < n; ++c)
		{
			std::cin >> word[c];
			std::cin >> occurences[c];
			if(occurences[c] > max)
				max = occurences[c];
		}
		int rowWidth = 0;
		int height = 0;
		int maxh = 0;
		for(int x = 0; x < n; ++x)
		{
			int P = 8 + ceil((40*(occurences[x]-4))/(max-4));
			int W = ceil(0.5625f * word[x].length() * P);
			if((rowWidth+W) > w)
			{
				rowWidth = 0;
				height+= maxh;
				maxh = P;
			}
			if(maxh < P)
				maxh = P;
			rowWidth+=W;
			rowWidth+=10;
		}
		height+=maxh; // add height of last row
		std::cout << "CLOUD " << i << ": " << height << std::endl;
		++i;
	}
	return 0;
}
