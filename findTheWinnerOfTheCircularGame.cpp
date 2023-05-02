#include <iostream>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next;
} *first = NULL, *prev;

int ans = 0;

void createList(int n)
{
    first = new ListNode();
    first->data = 1;
    ListNode *current;
    for (int i = 2; i <= n; i++)
    {
        current = new ListNode();
        current->data = i;
        prev->next = current;
        prev = current;
    }
    current->next = first;
}

void fun(ListNode *p, ListNode *q, int k)
{
    if (p == q)
    {
        ans = p->data;
        return;
    }
    int count = k - 1;
    while (count > 0)
    {
        p = p->next;
        q = q->next;
        count--;
    }
    q->next = p->next;
    p = p->next;
    fun(p, q, k);
}

int findTheWinner(int n, int k)
{
    createList(n);
    fun(first, prev, k);
    return ans;
}

int main()
{
    return 0;
}