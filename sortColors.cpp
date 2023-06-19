#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortColors(vector<int> &nums)
{

    int low = 0, mid = 0, high = nums.size() - 1;
    while (high >= mid)
    {
        if (nums[mid] == 0)
        {
            swap(&nums[mid], &nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(&nums[high], &nums[mid]);
            high--;
        }
        else
            mid++;
    }
}
int main()
{
    return 0;
}