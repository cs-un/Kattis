#include <iostream>
#include <cmath>

#define TLE std::cout << "TLE" << std::endl;
int m;
bool test(int n, int exp)
{
	int product = n;
	for(int i = 1; i < exp; ++i)
		{
			product*=n;
			if(product > m)
			{
				TLE;
				return true;
			}
		}
		return false;
}

int main(void)
{
	int n, t;
	std::cin >> m >> n >> t;
	int facto = 1;
	switch(t)
	{
		case 1:
		for(int i = n; i > 0; --i)
		{
			if(facto > m){
				TLE;
				return 0;
			}
			facto *=i;
		}
		break;
		case 2:
		if(test(2, n))
			return 0;
		break;
		case 3:
		if(test(n, 4))
			return 0;
		break;
		case 4:
		if(test(n, 3))
			return 0;
		break;
		case 5:
		if(test(n, 2))
			return 0;
		break;
		case 6:
		if((n*log2(n))>m)
		{
			TLE;
			return 0;
		}
		case 7:
		if(n > m)
		{
			TLE;
			return 0;
		}
		break;
	}
	std::cout << "AC" <<std::endl;
}