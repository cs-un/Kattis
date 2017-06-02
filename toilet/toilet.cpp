#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;
	char state = s[0];
	int n = state == 'D', n2 = state == 'U', n3 = 0;
	if(n2) // adjust for starting position of toilet
		n2 -= 2*(s[1] == 'U');
	else
		n -= 2*(s[1] == 'D');
	for(int i = 1; i < s.length(); ++i)
	{
		switch(s[i])
		{
			case 'U':
			n2+=2;
			if(state == 'D')
				n3++;
			break;
			case 'D':
			n+=2;
			if(state == 'U')
				n3++;
			break;
		}
		state = s[i];
	}
	std::cout << n << std::endl << n2 << std::endl << n3;
	return 0;
}
