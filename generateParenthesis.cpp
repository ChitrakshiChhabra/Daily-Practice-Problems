#include <iostream>
#include <vector>
using namespace std;
void fun(int countOpen, int countClose, int n, string test, vector<string> &ans)
{
    if (countOpen > n || countClose > n)
        return;
    if (countOpen == n && countClose == n)
    {
        ans.push_back(test);
        return;
    }
    fun(countOpen + 1, countClose, n, test + "(", ans);
    if (countOpen > countClose)
        fun(countOpen, countClose + 1, n, test + ")", ans);
}
vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    string test = "";
    fun(0, 0, n, test, ans);
    return ans;
}
int main()
{
    return 0;
}