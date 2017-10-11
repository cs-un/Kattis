#include <iostream>
#include <string>
#include <unordered_map>

int main(void) {
    int N;
    std::cin >> N;
    std::unordered_map<std::string, int> words;
    while(N--)
    {
        std::string word;
        std::cin >> word;
        std::cout << words[word] << std::endl;
        for(int i = 1; i <= word.size(); ++i)
            ++words[word.substr(0, i)];
    }
    return 0;   
}