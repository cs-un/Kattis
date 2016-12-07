#include <iostream>
#include <cmath>
#include <sstream>

int main(void) {
    int l, df, x;
    std::cin >> l >> df >> x;
    int max = 0;
    int min = -1;
    for(int i = l; i <= df; ++i)
    {
        std::stringstream ss;
        ss << i;
        std::string num = ss.str();
        int sum = 0;
        for(int c = 0; c < num.length(); ++c)
        {
            sum += num[c];
        }
        if(sum%48 == x && min == -1){
            if(min==-1)
                min = i;
        }
        if(sum%48 == x && i > max)
                 max = i;
    }
    std::cout << min << std::endl << max << std::endl;
    return 0;   
}