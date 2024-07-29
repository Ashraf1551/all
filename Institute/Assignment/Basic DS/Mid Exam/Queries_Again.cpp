#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    for (int i = 1; i < pos; i++)
    {
        head = head->next;
    }
    newNode->next = head->next;
    head->next->prev = newNode;
    head->next = newNode;
    newNode->prev = head;
}

int size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void print_recursion(Node *head)
{
    if (head == NULL)
        return;

    cout << head->val << ' ';
    print_recursion(head->next);
}

void print_reverse(Node *tail)
{
    if (tail == NULL)
        return;
    cout << tail->val << ' ';
    print_reverse(tail->prev);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x > size(head))
            cout << "Invalid" << endl;

        else
        {
            if (x == 0)
                insert_at_head(head, tail, v);

            else if (x == size(head))
                insert_at_tail(head, tail, v);

            else
                insert_at_pos(head, x, v);

            cout << "L -> ";
            print_recursion(head);
            cout << endl;

            cout << "R -> ";
            print_reverse(tail);
            cout << endl;
        }
    }
    return 0;
}