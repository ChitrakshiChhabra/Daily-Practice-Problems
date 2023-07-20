#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids)
{
    stack<int> st;
    int n = asteroids.size();
    for (int i = 0; i < n; i++)
    {
        if (asteroids[i] < 0)
        {
            bool cond = false;
            while (!st.empty() && st.top() >= 0)
            {
                if (abs(st.top()) > abs(asteroids[i]))
                    break;
                else if (abs(st.top()) == abs(asteroids[i]))
                {
                    st.pop();
                    cond = true;
                    break;
                }
                else
                    st.pop();
            }
            if (cond == true)
                continue;
            if (st.empty() || st.top() < 0)
                st.push(asteroids[i]);
        }
        else
            st.push(asteroids[i]);
    }

    int x = st.size();
    vector<int> ans(x, 0);

    for (int i = x - 1; i >= 0; i--)
    {
        ans[i] = st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    return 0;
}
