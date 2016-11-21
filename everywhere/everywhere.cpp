#include <iostream>
#include <map>

int main(void) {
	int cases;
	std::cin >> cases;
	while(cases-->0){
		int n;
		std::cin >> n;
		std::map<std::string, int> m;
		std::string city;
		for(int i = 0; i < n; ++i)
		{
			std::cin >> city;
			if(m.find(city) !=m.end())
				m[city]++;
			else
				m[city] = 1;
		}
		std::cout << m.size() << std::endl;
	}
	return 0;   
}
