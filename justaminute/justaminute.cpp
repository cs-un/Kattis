#include <iostream>

int main(void) {
	int n, a, b;
	std::cout.precision(9);
	double tot;
	std::cin >> n;
	int observations = 0;
	for(int i = 0; i < n; ++i)
	{
		std:: cin >> a >> b;
		tot += b;
		observations += a;
	}
	if(tot/(observations*60) <= 1)
		std::cout << "measurement error";
	else
		std::cout << (tot/(observations*60)) << std::endl;
	return 0;   
}
