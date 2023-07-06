#include <iostream>
#include <vector>
using namespace std;

vector<int> fun(vector<int> &arr, int k, int x, int low, int high)
{
    vector<int> ans = {low, high};
    int mid = (low + high) / 2;
    if (arr[mid] >= x)
    {
        if ((mid - low + 1) >= k)
            return fun(arr, k, x, low, mid);
    }
    else if (arr[mid] < x)
    {
        if ((high - mid) >= k)
            fun(arr, k, x, mid + 1, high);
    }
    return ans;
}
vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    vector<int> ans = arr;
    if (k > arr.size())
    {
        vector<int> range = fun(arr, k, x, 0, arr.size() - 1);
        vector<int> temp(arr.begin() + range[0], arr.begin() + range[1] + 1);
        ans = temp;
    }
    int available = ans.size();
    if (available == k)
        return ans;
    int i = 0, j = ans.size() - 1;
    while (available != k && i <= j)
    {
        int one = abs(x - ans[i]);
        int two = abs(x - ans[j]);

        if (one <= two)
            j--;
        else
            i++;
        available--;
    }
    vector<int> last;
    for (int k = i; k <= j; k++)
        last.push_back(ans[k]);
    return last;
}

int main()
{
    return 0;
}
