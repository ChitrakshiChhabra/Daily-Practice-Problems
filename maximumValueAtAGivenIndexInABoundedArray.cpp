#include <iostream>
#include <vector>
using namespace std;
 class Solution {
    long long solve(long long mid ,int index, int n)
    {
        long long f = (mid-1)*(mid)/2;
        long long p = (mid-1-index);
        if(p<=0)
        {
            p=0;
        }
        else
        {
            p=(p*(p+1))/2;
        }
        long long h = index - (mid-1);
        if(h<=0)
        {
            h=0;
        }
        long long ll=0;
        if(index!=0)
        {
            ll=f-p+h;
        }
        long long oo= n - index;
        long long p2=mid-oo;
        if(p2<=0)
        {
            p2=0;
        }
        else
        {
            p2=(p2*(p2+1))/2;
        }
        long long h2= oo-mid ;
        if(h2<=0)
        {
            h2=0;
        }
        long long rr=0;
        if(index!=n-1)
        {
            rr=f-p2+h2;
        }
        return mid+ll+rr;  
    }
    
public:
    int maxValue(int n, int index, int maxSum) {
        int l=1 , h=maxSum;
        int ans=0;
        while(l<=h)
        {
            int mid = ((h-l)/2)+l;
            if(solve(mid,index,n)<=maxSum)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}