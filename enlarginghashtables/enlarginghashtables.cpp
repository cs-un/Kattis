#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

std::vector<int> primes;

int closest( int value) {
	auto const it = std::upper_bound(primes.begin(), primes.end(), value);
	return *it;
}

//https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
void SieveOfEratosthenes(int n)
{
	bool prime[n];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p <= sqrt(n); ++p)
	{
		if (prime[p])
		{
			for (int i = p*2; i <=n ; i += p)
				prime[i] = false;
		}
	}

	for (int p = 2; p <= n; ++p)
		if (prime[p])
			primes.push_back(p);
}

bool prime(int n)
{
    if(n == 2)
        return true;

	for(int i = 3; i <= sqrt(n); ++i)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int main() {
	int n;
	SieveOfEratosthenes(1000000); // not the greatest of ideas, but it does speed the execution up.
	while(std::cin >> n)
	{
		if(n==0)
			break;
		
		if(2*n < primes[primes.size()-1]){
			std::cout << closest(2*n);
			if(!std::binary_search(primes.begin(), primes.end(), n))
				std::cout << " (" << n << " is not prime)";
		}
		else
		{
			for(int i = 2 * n + 1;;++i)
			{
				if(prime(i))
				{
					std::cout << i;
					break;
				}
			}
			if(!prime(n))
				std::cout << " (" << n << " is not prime)";
		}
		std::cout << std::endl;
	}
	return 0;
}
