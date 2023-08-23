#include <iostream>
#include <algorithm>
using namespace std;

string convertToTitle(int columnNumber)
{
    int n = columnNumber;
    string ans;
    while (n > 0)
    {
        n--;
        auto [q, r] = div(n, 26);
        ans.push_back(char('A' + r));
        n = q;
    }
    reverse(ans.begin(), ans.end()); 
    return ans;                      
}

int main()
{
    return 0;
}