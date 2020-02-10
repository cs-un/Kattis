#include <set>
#include <string>
#include <iostream>

using namespace std;

void findPalindromes(set<string> &palindromes, string &str, int leftidx, int rightidx);

int main()
{
   string input;
   while(getline(cin, input))
   { 
      set<string> palindromes{};
      
      for(auto i{1}; i < input.length(); ++i)
      {
         findPalindromes(palindromes, input, i - 1, i + 1);
         findPalindromes(palindromes, input, i - 1, i);
      }

      for(const auto p : palindromes)
      {
         cout << p << "\n";
      }
      cout << "\n";
   }
   return 0;
}

void findPalindromes(set<string> &palindromes, string &str, int leftidx, int rightidx)
{
	for(;leftidx >= 0 && rightidx < str.length() && str[leftidx] == str[rightidx]; --leftidx, ++rightidx)
   {
      palindromes.insert(str.substr(leftidx, rightidx - leftidx + 1));
   }
}