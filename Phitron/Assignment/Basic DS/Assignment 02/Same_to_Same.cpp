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

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void check_same(Node *head1, Node *head2)
{

    int size1 = size(head1);
    int size2 = size(head2);

    if (size1 != size2)
    {
        cout << "NO" << endl;
        return;
    }

    while (head1 != NULL)
    {
        if (head1->val != head2->val)
        {
            cout << "NO" << endl;
            return;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    cout << "YES" << endl;
}

void create_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        create_linked_list(head_1, tail_1, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        create_linked_list(head_2, tail_2, val);
    }

    check_same(head_1, head_2);

    return 0;
}