// https://projecteuler.net/problem=2
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <iostream>
using namespace std;

int target = 4000000;

// f(n) = (f(n-1) * 4) + f(n-2)

uint64_t fib(int n)
{
    uint64_t sum = 2;
    int prev_prev = 0, prev = 2, curr, i;
    for (i = 2; ((4 * prev) + prev_prev) < n; i += 4) {
        curr = (4 * prev) + prev_prev;
        cout << curr << "\n";

        sum += curr;
        prev_prev = prev;
        prev = curr;
    }
    return sum;
}


int main()
{
    uint64_t sum = fib(target);
    cout << sum;
    return 0;
}