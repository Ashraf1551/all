#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_List(Node *n)
{
    if (n == NULL)
        return;

    print_List(n->next);
    cout << n->val << " ";
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    print_List(head);

    return 0;
}