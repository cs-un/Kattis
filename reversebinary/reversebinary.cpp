#include <iostream>
#include <bitset>
#include <math.h>

int bitcount(int a)
{
	int c = 0;
	for(int i = 0; i < 30; ++i)
		if(a > pow(2,i) - 1)
			c++;
	return c;
}

int main(void) {
	int a;
	std::cin>>a;
	std::bitset<32> bits(a);
	std::bitset<32> output(0);
	for(int i = 0; i < bitcount(a); ++i)
	{
		if(bits.test(i))
			output.set(bitcount(a)-i-1);
	}
	std::cout << (int) output.to_ulong();
	return 0;   
}