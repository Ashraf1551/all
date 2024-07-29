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
        this->val=val;
        this->next=NULL;
    }
};
void print_recursive(Node* n)
{
    if(n==NULL) return;
    cout<<n->val<<" ";  //this line will print the list serially from berg
    print_recursive(n->next);
    //cout<<n->val<<" "; //this line will print the list reversely
}
void print_recursive_reverse(Node* n)
{
    if(n==NULL) return;
    print_recursive_reverse(n->next);
    cout<<n->val<<" ";
}
int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_recursive(head);
    cout<<endl<<endl;
    print_recursive_reverse(head);
    return 0;
}