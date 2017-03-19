#include <iostream>
#include <regex>

int main() {
	std::string s;
	std::regex ex("0[xX][a-fA-F0-9]{1,8}");
	std::smatch m;
	std::stringstream ss;
	while(getline(std::cin, s))
	{
		while(std::regex_search(s,m,ex))
		{
			unsigned int y;
			for (auto x : m){
				ss << std::hex << x;
				ss >> y;
				std::cout << x << " " <<  y << std::endl;
				ss.clear();
				ss.str(std::string());
			}
			s = m.suffix().str();
		}
	}
	return 0;
}
