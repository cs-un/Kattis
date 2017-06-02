#include <iostream>
#include <string>

int main() {
	int n;
	std::cin >> n;
	while(n-->0)
	{
		int cuts;
		std::string word;
		std::cin >> cuts >> word;
		for(int i = 0; i < cuts; ++i)
		{
			int len = word.length();
			if(len/4 == 0) // word won't change
				break;
			if(i%2 == 1)
				word = word.substr(0, len - len/4);
			else
				word = word.substr(len/4);
		}
		std::cout << word << std::endl;
	}
	return 0;
}
