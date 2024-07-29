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

void create_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int get_diff(Node *head)
{
    int mx = INT_MIN;
    int mn = INT_MAX;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > mx)
        {
            mx = temp->val;
        }
        if (temp->val < mn)
        {
            mn = temp->val;
        }
        temp = temp->next;
    }
    return mx - mn;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        create_linked_list(head, tail, val);
    }

    int result = get_diff(head);
    cout << result << endl;
    return 0;
}
