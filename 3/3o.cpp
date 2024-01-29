// https://projecteuler.net/problem=3
#include <cmath>
#include <math.h>
#include <iostream>
using namespace std;

long target = 600851475143;

int main()
{
    int lastFactor = 0;
    if (target % 2 == 0) // Reduce even number, as 2 conflates non-prime factors
    {
        lastFactor = 2;
        target = target / 2;
        while (target % 2 == 0)
        {
            target = target / 2;
        }
    }
    else {
        lastFactor = 1;
    }
    int factor = 3;
    int maxFactor = sqrt(target);
    while (target > 1 && factor <= maxFactor)
    {
        if (target % factor == 0)
        {
            target = target / factor;
            lastFactor = factor;
            while (target % factor == 0)
            {
                target = target / factor;
            }
            maxFactor = sqrt(target);
        }
        factor = factor + 2;
    }
    if (target == 1)
    {
        cout << lastFactor;
    } else
    {
        cout << target;
    }
}
