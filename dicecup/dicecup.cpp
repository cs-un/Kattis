#include <iostream>

int main(void) {
    int a, b;
    while(std:: cin >> a >> b){
    	int outcomes[a+b+1];
    	for(int i = 0; i < a+b+1; ++i)
    		outcomes[i] = 0;
    	for(int i = 1; i <= a; ++i)
    	{
    		for(int c = 1; c <= b; ++c)
    		{
    			if(outcomes[i+c] == 0)
    				outcomes[i+c] = 1;
    			else
    				outcomes[i+c]++;
    		}
    	}
    	int print[a+b+1];
    	int max = 0;
    	int index = 0;
    	for(int i = 0; i < a+b+1; ++i)
    	{
    		if(outcomes[i]>max)
    		{
    			max = outcomes[i];
    			index = 0;
    			print[index] = i;
    		}
    		else if(outcomes[i] == max)
    		{
    			index++;
    			print[index] = i;
    		}
    	}
    	for(int i = 0; i <= index; ++i)
    		std:: cout << print[i] << std::endl;
    }
    return 0;   
}
