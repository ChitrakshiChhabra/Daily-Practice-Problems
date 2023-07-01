#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

long long unfairness = LLONG_MAX;
    long long largest(vector <long long>&container)
    {
        long long l = LLONG_MIN;
        for(int i = 0; i < container.size(); i++)
            if(l < container[i]) l = container[i];
        return l;
    }
    void fun(vector<int>&cookies, vector<long long>&container,int k, int idx)
    {
        if(idx >= cookies.size())
        {
            long long largestNum = largest(container);
            unfairness = min(largestNum, unfairness);
            return;
        }
        for(int i = 0; i < k; i++)
        {
            container[i]+=cookies[idx];
            fun(cookies, container, k, idx + 1);
            container[i]-=cookies[idx];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector <long long> container(k, 0);
        fun(cookies, container, k, 0);
        return unfairness;
    }

int main()
{
    return 0;
}