#include <iostream>
#include <string>

int main(void) {
	int n;
	std::string garbage;
	while(std::cin >> n)
	{
		if(!n)
			break;
		int min = 1;
		int max = 0;

		int mods[20];
		int x = 0;

		for(int i = 0; i < n; ++i)
		{
			std::string s;
			int temp;
			std::cin >> s >> garbage >> temp;
			if(s.find("less") != std::string::npos)
				max = (temp < max || max == 0) ? temp : max;
			else if(s.find("greater") != std::string::npos)
				min = temp > min ? temp + 1 : min;
			else
				mods[x++] = temp;
		}

		bool printed = false;
		if(!max)
		{
			std::cout << "infinite";
			printed = true;
		}
		else
		{
			for(int i = min; i < max; ++i)
			{
				for(int j = 0; j < x; ++j)
				{
					if(i % mods[j] != 0)
						goto next;
				}
				printed = true;
				std::cout << i << " ";
				next:;
			}
		}
		std::cout << (printed ? "" : "none") << std::endl;
	}
}
