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

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> finalAns;
    if (root == NULL)
        return finalAns;
    queue<TreeNode *> q;
    q.push(root);
    int flag = 1;
    while (!q.empty())
    {
        int n = q.size();
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);

            if (flag == 1)
                ans[i] = temp->val;
            else
                ans[n - i - 1] = temp->val;
        }
        finalAns.push_back(ans);
        flag *= -1;
    }

    return finalAns;
}
int main()
{
    return 0;
}