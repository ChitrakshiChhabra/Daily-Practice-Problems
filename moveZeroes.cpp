#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void moveZeroes(vector<int> &nums)
{

    int j = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return;
    for (int i = j + 1; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(&nums[i], &nums[j]);
            j++;
        }
    }
}

int main()
{
    return 0;
}