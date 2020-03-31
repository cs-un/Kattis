#include <unordered_map>
#include <iostream>

using namespace std;

const long long mod = 1000000007LL;

unordered_map<string, long long> meanings{};
unordered_map<string, long long> dp{};

long long getNumberOfMeanings(string& word, int start, int end)
{
   if(start == word.size())
   {
      return 1;
   }

   string finalw = word.substr(start, end - start);

   if(dp.count(finalw))
   {
      return dp[finalw];
   }
   string w{};
   long long sum{0};
   for(int i{start}; i < end; ++i)
   {
      w += word[i];
      if(!meanings.count(w))
      {
         continue;
      }
      sum += meanings[w] * getNumberOfMeanings(word, i + 1, end);
   }
   sum %= mod;
   dp[w] = sum;
   return sum;
}

int main()
{
   int n;
   string word;

   cin >> n >> word;
   while(n--)
   {
      string w;
      int m;
      cin >> w >> m;
      meanings[w] = m;
   }
   cout << getNumberOfMeanings(word, 0, word.size());
}