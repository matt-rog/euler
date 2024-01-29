// https://projecteuler.net/problem=4
#include <cmath>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int heighest = 0;
    for (int a = 999; a >= 100; a--)
    {
        for (int b = 990; b >= 100; b = b - 11) // |p| is even, 11 is factor of p
        {
            int product = a * b;
            string p = to_string(product);
            if (p == string(p.rbegin(), p.rend()))
            {
                if(product > heighest){
                    heighest = product;
                }
            }
        }
    }
    cout << heighest;
}

// References
// https://en.wikipedia.org/wiki/Palindromic_number
