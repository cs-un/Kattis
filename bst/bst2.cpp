#include <map>
#include <sstream>
#include <iostream>
#include <cmath>

int main() {
   int n; 
   std::cin >> n; 
   long c = 0;
   std::map<int, int> bst;
   std::ostringstream oss;
   int num;
   std::cin >> num;
   bst[num] = 0;
   oss << '0' << '\n';
   for(int i = 1; i < n; ++i) 
   {
      int num; 
      std::cin >> num;
      std::map<int, int>::iterator it = bst.lower_bound(num);
      int depth = 0;
      if (it != bst.end())
         depth = it -> second + 1;
      if (it != bst.begin()){
         --it;
         depth = std::max(depth, it -> second + 1);
      }
      bst[num] = depth;
      c += depth;
      oss << c << '\n';
   }
   std::cout << oss.str();
   return 0;
}
