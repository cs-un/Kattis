#include <iostream>

int main(void) {
    int n;
    int outcomes[6] = {0,0,0,0,0,0};
    std::cin >> n;
    for(int i = 0; i < n; ++i)
    {
    	int c;
    	std::cin >> c;
    	if(outcomes[c-1] == 0)
    		outcomes[c-1] = i + 1;
    	else
    		outcomes[c-1] = -1;
    }
    for(int i = 5; i >=0; --i)
    {
    	if(outcomes[i] > 0){
    		std::cout << outcomes[i];
    		return 0;
    	}
    }
    std::cout << "none";
    return 0;   
}
