// https://projecteuler.net/problem=5
#include <cmath>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;


vector<int> primes{2, 3, 5, 7, 11, 13, 17, 19, 23};
vector<int> a(30);
int main()
{
    int k = 20;
    int N = 1;
    int i = 0;
    bool check = true;
    double limit = sqrt(k);
    while(primes[i] <= k)
    {
        a[i] = 1;
        if(check)
        {
            if(primes[i] <= limit)
            {
                a[i] = floor(log(k)/log(primes[i]));
            }
            else
            {
                check = false;
            }
        }
        N = N * pow(primes[i],a[i]);
        i++;
    }
    cout << N;
}

// References
