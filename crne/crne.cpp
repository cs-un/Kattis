#include <iostream>

//naive solution, meets time requirements... but slow
long calc(long n)
{
    long k = 2;
    if(n == 1)
        return 2;
    if(n==0)
        return 0;
    long s = 4;
    int c = 1;
    for(long i = 3; i <= n; ++i)
    {
        if(c==2){
            c = 0;
            k++;
        }
        s+=k;
        c++;
    }
    return s;
}

int main(void) {
    long long n;
    std::cin >> n;
    n+=2;
    long long s = n * n;
    s/=4; // number of pieces = (cuts+2)*(cuts+2)*1/4
    std::cout << s << std::endl;
    return 0;   
}
