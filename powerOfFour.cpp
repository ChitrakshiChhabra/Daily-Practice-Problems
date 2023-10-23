#include <iostream>
using namespace std;

bool isPowerOfFour(int n)
{
    if (n == 1)
        return true;
    if (n == 0)
        return false;
    if (n % 4 == 0)
        return isPowerOfFour(n / 4);
    return false;
}

int main()
{
    return 0;
}