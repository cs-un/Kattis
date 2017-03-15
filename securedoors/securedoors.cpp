#include <map>
#include <iostream>
#include <string>
#include <regex>

int main() {
	std::string s;
	std::map<std::string, bool> people;
	std::regex ex("exit .+");
	getline(std::cin, s); // eat n
	while(getline(std::cin, s))
	{
		bool exit = false;
		if(std::regex_match(s, ex)){
			exit = true;
			s = s.substr(5);
		}
		else
			s = s.substr(6);
		std::cout << s;
		if(exit)
			std::cout << " exited " << (people[s] == false ? "(ANOMALY)" : "") << std::endl;
		else
			std::cout << " entered " << (people[s] ? "(ANOMALY)" : "") << std::endl;
		people[s] = !exit;
	}
	return 0;
}
