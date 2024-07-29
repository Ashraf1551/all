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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;

    Node *fast = head;
    Node *slow = head;
    bool flag = true;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "Detected" << endl;
    else
        cout << "Not";
    return 0;
}