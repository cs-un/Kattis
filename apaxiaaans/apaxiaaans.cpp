#include <iostream>
#include <string.h>

int main(void) {
	std::string a;
    while(std:: cin >> a){
    	std::string b;
    	char last;
    	b += a[0];
    	last = b[0];
    	for(int i = 1; i < a.length(); ++i)
    	{
    		if(a[i] != last)
    		{
    			b += a[i];
    			last = a[i];
    		}
    	}
    	std::cout << b << std::endl;
    }
    return 0;   
}
