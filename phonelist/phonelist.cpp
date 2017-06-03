#include <iostream>
#include <string>
#include <unordered_set>

int main(void) {
	int t;
	std::cin >> t;
	while(t-->0){
		int n;
		std::cin >> n;
		std::unordered_set<std::string> numbers;
		for(int i = 0; i < n; ++i)
		{
			std::string num;
			std::cin >> num;
			numbers.insert(num);
		}
		bool found = false;
		for(const std::string& x: numbers)
		{
			std::string temp = x;
			for(int i = temp.length() - 1; i >= 0; --i){
				temp.erase(i);
				if(numbers.count(temp))
				{
					found = true;
					goto print;
				}
			}
		}
		print:std::cout << (found ? "NO" : "YES") << std::endl;
	}
	return 0;   
}
