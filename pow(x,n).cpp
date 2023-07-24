#include <iostream>
using namespace std;

double fun(double base, long power)
{
    if (power == 0)
        return 1;
    if (power == 1)
        return base;
    if (power % 2 == 0)
        return fun(base * base, power / 2);
    else
        return base * fun(base, power - 1);
}
double myPow(double x, int n)
{
    long nn = n;
    if (nn < 0)
        nn *= -1;
    double ans = fun(x, nn);
    if (n < 0)
        ans = 1 / ans;
    return ans;
}

int main()
{
    return 0;
}