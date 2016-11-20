#include <iostream>
#include <algorithm>

int main(void) {
    int a, b;
    while(std:: cin >> a >> b)
    {
    	if(a == 0 && a == b)
    		break;
    	int times = 0;
    	while(a >= b)
    	{
    		times++;
    		a-=b;
    	}
    	std::cout << times << " " << a << " / " << b << std::endl;
    }
    return 0;   
}
