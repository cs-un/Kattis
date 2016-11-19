#include <iostream>
#include <math.h>

int main(void) {
	int n;
	std:: cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		int temp;
		std::cin >> temp;
		arr[i] = temp;
	}
	bool popped[n];
	int pop = 0;
	int arrows = 0;
	for(int i = 0; i < n; ++i)
	{
		popped[i] = false;
	}
	while(pop != n)
	{
		int height = -1;
		int prev = pop;
		for(int i = 0; i < n; ++i)
		{
			if(!popped[i])
			{

				if(height == -1 || height == arr[i])
				{
					height = arr[i];
					height--;
					popped[i] = true;
					pop++;
				}
			}
		}
		arrows++;
	}
	std::cout << arrows << std::endl;
	return 0;   
}
