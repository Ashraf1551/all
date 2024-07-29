/*****************************************************
 * Name: Ali Ashraf                                  *
 * Email: mdashrafgmhs@gmail.com                     *
 * HackerRank: @ashRuff_007                          *
 * HackerRank Profile: https://www.hackerrank.com/profile/ashRuff_007
 *****************************************************/

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
        this->next = nullptr;
    }
};

void insert(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void sort_list(Node *head)
{
    if (head == NULL)
        return;

    Node *i, *j;
    for (i = head; i->next != NULL; i = i->next)
    {
        for (j = head; j->next != NULL; j = j->next)
        {
            if (j->val > j->next->val)
            {
                swap(j->val, j->next->val);
            }
        }
    }
}
void duplicate(Node *&head)
{
    for (Node *i = head; i != NULL; i = i->next) // protita node traverse kortesi
    {
        Node *temp = i;                     // current node head theke shuru
        for (Node *j = i->next; j != NULL;) // head er porer value theke check, NULL na houa porjonto
        {
            if (i->val == j->val)
            {
                Node *deleteNode = j;
                temp->next = j->next;
                j = j->next;
                delete deleteNode;
            }
            else
            {
                temp = j;
                j = j->next;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (cin >> value)
    {
        if (value == -1)
            break;

        else
        {
            insert(head, tail, value);
        }
    }
    duplicate(head);
    print_list(head);
    return 0;
}
