#include <iostream>

int main(void) {
    std::string in;
    int n = 500;
    std::cout << n << std::endl;
    int min = 0;
    int max = 1000;
    while(std::cin >> in)
    {
        if(in == "correct")
            break;
        else if(in == "lower")
        {
            max = n - 1;
            n = (min + n)/2;
        }
        else if(in == "higher")
        {
            min = n + 1;
            n = (max + min)/2;
        }
        std::cout << n << std::endl;
    }
    return 0;   
}
