#include <iostream>
#include <vector>
using namespace std;

int fun(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return low;
    int mid = (low + high) / 2;
    if (arr[mid] > arr[mid + 1])
        return fun(arr, low, mid);
    else
        return fun(arr, mid + 1, high);
}
int peakIndexInMountainArray(vector<int> &arr)
{
    int n = arr.size();
    return fun(arr, 0, n - 1);
}
int main()
{
    return 0;
}