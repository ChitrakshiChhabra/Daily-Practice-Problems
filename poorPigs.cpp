#include <iostream>
using namespace std;

int poorPigs(int buckets, int timeDetect, int timeTest)
{
    return ceil(log2(buckets) / log2(int(timeTest / timeDetect) + 1));
}

int main()
{
    return 0;
}