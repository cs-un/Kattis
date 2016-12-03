#include <iostream>

int main(void) {
	int n;
	std::cin >> n;
	for(int i = 0; i < n; ++i)
	{
		int sc, se;
		std::cin >> sc >> se;
		int arr[200000];
		int iq;
		double sum1 = 0;
		for(int i = 0; i < sc; ++i)
		{
			std::cin >> iq;
			arr[i] = iq;
			sum1+=iq;
		}
		double sum2 = 0;
		for(int i = 0; i < se; ++i)
		{
			std::cin >> iq;
			sum2+=iq;
		}
		double avg = sum2 / se;
		double avg2 = sum1 / sc;
		int num = 0;
		for(int i = 0; i < sc; ++i)
		{
			if(arr[i] > avg && arr[i] < avg2)
				num++;
		}
		std:: cout << num << std::endl;
	}
	return 0;   
}
