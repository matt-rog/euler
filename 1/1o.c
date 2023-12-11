// https://projecteuler.net/problem=1
#include <stdio.h>
#include <math.h>

int target = 999;

int sum_divisible_by_n(int n)
{
    // sum for mod 5: 5+10+15+20+...+995
    // (sum for mod 5) / 5 => 1+2+3+4+...
    int quo = floor((double) target / n);
    return n * (quo * (quo + 1)) / 2;
}

int main()
{
    // rm double count for mod 15
    int sum = sum_divisible_by_n(3) + sum_divisible_by_n(5) - sum_divisible_by_n(15);
    printf("%d", sum);
}
