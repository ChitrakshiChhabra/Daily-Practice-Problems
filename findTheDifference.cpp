#include <iostream>
#include <map>
using namespace std;

char findTheDifference(string s, string t)
{
    if (s == "")
        return t[0];

    map<char, int> m;
    for (char ch : s)
    {
        m[ch]++;
    }
    char ans;
    for (char ch : t)
    {
        if (m[ch] > 0)
        {
            m[ch]--;
        }
        else
        {
            return ch;
        }
    }
    return '\0';
}
int main()
{
    return 0;
}