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
        this->next = NULL;
    }
};

void insert_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = newNode;
}

void delete_position(Node *&head, int pos)
{
    if (head == NULL)
        return;
    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }
    if (temp->next == NULL)
    {
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
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

int main()
{
    Node *head = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
            insert_head(head, v);
        else if (x == 1)
            insert_tail(head, v);
        else if (x == 2)
            delete_position(head, v);

        print_list(head);
        cout << endl;
    }
    return 0;
}
