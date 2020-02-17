#include <vector>
#include <iostream>

using namespace std;

#define exit(w) cout << w; return 0

int main()
{
   int n;
   cin >> n;

   vector<int> weights{};
   for(auto i{0}; i < n; ++i)
   {
      int w;
      cin >> w;
      if(w == 1000)
      {
         exit(w);
      }
      weights.push_back(w);
   }

   vector<bool> poss(2001, false);
   poss[0] = true;

   for(const auto& w : weights)
   {
      auto m{2001 - w};
      for(auto j{m}; j >= 0; --j)
      {
         if(poss[j])
         {
            poss[j + w] = true;
         }
      }
   }

   for(auto i{0}; i <= 1000; ++i)
   {
      if(poss[1000 + i])
      {
         exit(1000 + i);
      }
      else if(poss[1000 - i])
      {
         exit(1000 - i);
      }
   }

   return 0;
}
