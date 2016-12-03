#include <iostream>
#include <map>

int main(void) {
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int sc, se;
        std::cin >> sc >> se;
        std::map<int, int> IQ;
        int iq;
        double sum1 = 0;
        for(int i = 0; i < sc; ++i)
        {
            std::cin >> iq;
            if(IQ.find(iq) != IQ.end())
                IQ[iq]++;
            else
                IQ[iq] = 1;
            sum1+=iq;
        }
        double sum2 = 0;
        for(int i = 0; i < se; ++i)
        {
            std::cin >> iq;
            sum2+=iq;
        }
        double avg = sum2 / se;
        double avg2 = sum1 / sc;
        int num = 0;
        for(auto const& ent1 : IQ)
        {
            if(ent1.first < avg2 && ent1.first > avg)
                num+=ent1.second;
        }
        std:: cout << num << std::endl;
    }
    return 0;   
}