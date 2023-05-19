#include <iostream>
#include <vector>
using namespace std;
vector<int> getConcatenation(vector<int> &nums)
{

    int new_array_size = 2 * nums.size();
    vector<int> ans(new_array_size, 0);

    for (int i = 0; i < nums.size(); i++)
    {
        ans.at(i) = nums.at(i);
        ans.at(i + nums.size()) = nums.at(i);
    }

    return ans;
}
int main()
{
    return 0;
}