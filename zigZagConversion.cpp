#include <iostream>
using namespace std;

string ans = "";
string convert(string s, int numRows, int index = 0)
{
    if (index == numRows || index >= s.size())
        return ans;
    if (s.size() == 1 || numRows == 1)
        return s;
    int i = index;
    ans += s[i];
    while (true)
    {
        i = i + 2 * ((numRows - 1) - i % (numRows - 1));
        if (i >= s.size())
            break;
        ans += s[i];
    }
    return convert(s, numRows, index + 1);
}
int main()
{
    return 0;
}