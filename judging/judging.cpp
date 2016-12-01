#include <iostream>
#include <unordered_map>
#include <cmath>

int main(void) {
    int n;
    std::string in;
    std::cin >> n;
    std::unordered_map<std::string,int> map1; // could have done this with only 1 map
    std::unordered_map<std::string,int> map2;
    for(int i = 0; i < n*2; ++i)
    {
        std::cin >> in;
        if(i < n){
            if(map1.count(in)==0)
                map1.insert({in,1});    
            else
                map1.at(in)++;
        }
        if(i >= n){
            if(map2.count(in)==0)
                map2.insert({in,1});    
            else
                map2.at(in)++;
        }
    }
    int k = 0;
    for(auto& x : map1)
    {
        if(map2.count(x.first)>0)
            k+= std::min(map2.at(x.first),x.second);
    }
    std::cout << k << std::endl;
    return 0;   
}
