#include <iostream>
#include <vector>
using namespace std;
int diagonalSum(vector<vector<int>> &mat)
{

    int x_one = 0, y_two = mat.size() - 1, sum = 0;

    while (x_one < mat.size() && y_two >= 0)
    {
        if (x_one == y_two)
            sum += mat[x_one][x_one];
        else
            sum += mat[x_one][x_one] + mat[x_one][y_two];

        x_one += 1;
        y_two -= 1;
    }
    return sum;
}
int main()
{
    return 0;
}