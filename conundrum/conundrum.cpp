#include <iostream>

int main(void){
	std::string a;
	std::cin >> a;
	int switches = 0;
	for(int i = 0; i < a.length(); ++i)
	{
		char c = a[i];
		switch(i % 3)
		{
			case 0:
			if(c!='P')
			{
				switches++;
			}
			break;
			case 1:
			if(c!='E')
			{
				switches++;
			}
			break;
			case 2:
			if(c!='R')
			{
				switches++;
			}
			break;
		}
	}
	std::cout << switches;
}