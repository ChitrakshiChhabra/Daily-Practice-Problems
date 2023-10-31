#include <iostream>
#include <vector>
using namespace std;

vector<int> findArray(vector<int> &pref)
{
    int prev = pref[0];

    for (int i = 1; i < pref.size(); i++)
    {
        pref[i] ^= prev;
        prev ^= pref[i];
    }

    return pref;
}

int main()
{
    return 0;
}