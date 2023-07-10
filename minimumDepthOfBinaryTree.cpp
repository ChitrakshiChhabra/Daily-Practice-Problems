#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int minDepth(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int leftSide = 1 + minDepth(root->left);
    int rightSide = 1 + minDepth(root->right);
    if (leftSide == 1)
        return rightSide;
    if (rightSide == 1)
        return leftSide;
    return min(leftSide, rightSide);
}
int main()
{
    return 0;
}