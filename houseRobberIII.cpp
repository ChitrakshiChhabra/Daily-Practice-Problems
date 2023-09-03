#include <iostream>
#include <vector>
#include <unordered_map>
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
unordered_map<TreeNode *, int> map;
int rob(TreeNode *root)
{
    traverse(root);
    return map[root];
}
void traverse(TreeNode *root)
{
    if (root == nullptr)
        return;
    if (root->left == nullptr && root->right == nullptr)
    {
        map[root] = root->val;
        return;
    }
    int countRoot = 0;
    int xRoot = 0;
    if (root->left != nullptr && !map.count(root->left))
    {
        traverse(root->left);
        xRoot += map[root->left];
        if (root->left->left != nullptr)
            countRoot += map[root->left->left];
        if (root->left->right != nullptr)
            countRoot += map[root->left->right];
    }
    if (root->right != nullptr && !map.count(root->right))
    {
        traverse(root->right);
        xRoot += map[root->right];
        if (root->right->left != nullptr)
            countRoot += map[root->right->left];
        if (root->right->right != nullptr)
            countRoot += map[root->right->right];
    }
    map[root] = max(xRoot, countRoot + root->val);
}
int main()
{
    return 0;
}