#include <iostream>
#include <algorithm>
#include <math.h>

int main(void) {
    int a;
    while(std:: cin >> a){
		int divsum = 1; // 1 is always a divisor
    	for(int i = 2; i <= sqrt(a); ++i) 
    	{
    		if(a % i == 0){
    			divsum += i;
    			if(i != a/i) //divisors come in "pairs", but we don't want to add "duplicates"!
    				divsum += a/i;
    		}
    	}
    	std::string output = "perfect";
    	int diff = divsum-a;
    	if(diff != 0){
    		if(std::abs(diff) > 2)
    			output = "not " + output;
    		else if(std::abs(diff) <=2)
    			output = "almost " + output;
    	}
    	std::cout << a << " " << output << std::endl;
    }
    return 0;   
}
