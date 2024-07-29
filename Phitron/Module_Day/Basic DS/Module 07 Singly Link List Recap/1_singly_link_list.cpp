#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Node
{
public:
	int val;
	Node *next;

	/*Node(int v){val = v;this->next=NULL;}*/

	Node(int val)
	{
		this->val = val;
		this->next = NULL;
	}

};
void print_linked_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
	// Node a,b;
	// a.val=10;
	// b.val=20;
	// a.next=&b;
	Node* head =new Node(5);
	Node* a =new Node(10);
	Node* b=new Node(20);
	Node* c =new Node(30);
	Node* d =new Node(40);
	head->next=a;
	a->next=b;
	b->next=c;
	c->next=d;
	print_linked_list(head);
	// cout<<(*a).val<<endl;
	// cout<<(*b).val<<endl;
	// cout<<a->val<<endl;
	// cout<<b->val<<endl;

	return 0;
}