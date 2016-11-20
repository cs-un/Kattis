#include <iostream>
#include <algorithm>
#include <sstream>

int main(void) {
	int n;
	std::cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i)
	{
		int a = 0;
		std:: cin >> a;
		arr[i] = a;
	}
	std::sort(arr, arr + n);
	std::string s;
	for(int i = 0; i < n; ++i)
	{
		std::stringstream ss;
		ss << arr[i];
		std::string temp = ss.str();
		int num = 0;
		int c = i;
		if(!((c+1)==n))
			while((arr[c+1] - arr[c]) == 1 && c!=n){
				num++;
				c++;
			}
			if(num >= 2){
				std::stringstream ss2;
				ss2 << arr[c];
				temp = temp + "-" + ss2.str();
				i = c;
			}
			if(s.length() > 0)
				s = s + " " + temp;
			else
				s = temp;
		}
		std::cout << s;
		return 0;   
	}
