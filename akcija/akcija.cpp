#include <iostream>
#include <algorithm>
#include <math.h>

int main(void) {
    int n;
    std::cin >> n;
    int cost = 0;
    int books[n];
    for(int i = 0; i < n; ++i)
    {
    	int price;
    	std::cin >> price;
    	books[i] = price;
    }
    std::sort(books, books + n);
    int c = 0;
    for(int i = n; i > 0; --i)
    {
    	if(c!=2){ // don't add price of book if we've added 2 since the last freebie
    		cost+=books[i-1];
    		c++;
    	}
    	else
    		c = 0;
    }
    std::cout << cost << std::endl;
    return 0;   
}
