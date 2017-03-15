#include <iostream>
#include <string>

int main() {
	std::string s;
	int maxDiff;
	std::cin >> maxDiff;
	std::cin >> s;
	int balance = 0;
	int i;
	for(i = 0; i < s.length(); ++i)
	{
		if(s[i] == 'M')
			balance++;
		else
			balance--;

		if(balance > maxDiff || balance < -maxDiff)
		{
			if((i+1) < s.length() && s[i+1] != s[i])
			{
				if(s[i+1] == 'M')
					balance++;
				else
					balance--;
				i++;
				continue;
			}
			break;
		}
	}
	if(i == s.length())
		std::cout << s.length();
	else
		std::cout << i;
	return 0;
}
