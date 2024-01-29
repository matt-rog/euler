// https://projecteuler.net/problem=4
#include <cmath>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int product)
{
    string p = to_string(product);
    if (p == string(p.rbegin(), p.rend()))
    {
        return true;
    }
    return false;
}

int main()
{
    int heighest = 0;
    int a = 999;
    while (a >= 100)
    {
        int b = -1;
        int db = -1;
        if (a % 11 == 0)
        {
            b = 999;
            db = 1;
        } else {
            b = 990;
            db = 11;
        }
        while (b >= a)
        {
            if (a*b <= heighest)
            {
                break;
            }
            if (is_palindrome(a*b))
            {
                heighest = a*b;
            }
            b = b - db;
        }
        a = a - 1;
    }
    cout << heighest;
}
