// https://projecteuler.net/problem=5
#include <iostream>

using namespace std;

int target = 20;

// lcm(a,b) =  |a|(|b|/(gcd(a,b)))
// lcm(a,b,c) = product of highest powers of the prime factors of a,b,c

int gcd_f(int a, int b)
{
    int t = -1;
    while(b!=0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int lcm = target;
    int b = -1;
    for(int i = target; i > 1; i--)
    {
        b = i-1;
        lcm = lcm * (b / gcd_f(lcm,b));
    }
    cout << lcm;
    return 0;
}

// References
// https://en.wikipedia.org/wiki/Least_common_multiple
// https://en.wikipedia.org/wiki/Euclidean_algorithm