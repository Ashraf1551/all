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
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int search_index(Node *head, int x)
{
    int index = -1;
    for (Node *i = head; i != NULL; i = i->next)
    {
        index++;
        if (i->val == x)
        {
            return index;
        }
    }
    return -1;
}

void solve()
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

    int x;
    cin >> x;
    cout << search_index(head, x) << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
}





// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void create_linked_list(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         tail->next = newNode;
//         tail = newNode;
//     }
// }

// int search_index(Node *head, int x)
// {
//     Node *temp = head;
//     int index = 0;
//     while (temp != NULL)
//     {
//         if (temp->val == x)
//         {
//             return index;
//         }
//         temp = temp->next;
//         index++;
//     }
//     return -1;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         Node *head = NULL;
//         Node *tail = NULL;
//         int val;

       
//         while (true)
//         {
//             cin >> val;
//             if (val == -1)
//                 break;
//             create_linked_list(head, tail, val);
//         }

//         int x;
//         cin >> x;

//         int index = search_index(head, x);
//         cout << index << endl;
//     }

//     return 0;
// }
