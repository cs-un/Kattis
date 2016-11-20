#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>

int main(void) {
	int l = 1;
	int n;
	while(std::cin >> n && n!=0){
		std::map<std::string, int> m;
		std::string animal;
		std::cin >> std::ws;
		for(int i = 0; i < n; ++i)
		{
			std::string buf;
			getline(std::cin, animal);
			std::stringstream ss(animal);
			while(ss >> buf){} // split on space
			animal = buf;
			std::transform(animal.begin(), animal.end(), animal.begin(), ::tolower);
			if(m.find(animal) !=m.end())
				m[animal]++;
			else
				m[animal] = 1;
		}
		std::cout << "List " << l <<":" << std::endl;
		for(std::map<std::string, int>::iterator i = m.begin(); i != m.end(); ++i)
		{
			std::cout << i->first << " | " << i->second << std::endl;
		}
		l++;
	}
	return 0;   
}
