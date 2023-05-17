#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void reverseLinkedList(ListNode *pre, ListNode *cur, ListNode *nex, int k)
{
    for (int i = 1; i < k; i++)
    {
        cur->next = nex->next;
        nex->next = pre->next;
        pre->next = nex;
        nex = cur->next;
    }
}
int pairSum(ListNode *head)
{

    ListNode *slow = head, *fast = head->next;
    int k = 1;
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast->next != NULL)
            fast = fast->next;
        k++;
    }
    if (k == 1)
        return (slow->val + fast->val);
    else
        reverseLinkedList(slow, slow->next, slow->next->next, k);
    slow = slow->next;
    int finalAns = 0;

    while (slow != NULL)
    {
        if ((head->val + slow->val) > finalAns)
            finalAns = slow->val + head->val;
        slow = slow->next;
        head = head->next;
    }
    return finalAns;
}
int main()
{
    return 0;
}