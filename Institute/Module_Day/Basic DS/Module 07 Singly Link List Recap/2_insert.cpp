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


int size(Node* head)
{
	Node* temp = head;
	int count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}


void insert(Node *head, int pos, int val)
{
	Node* newNode = new Node(val);
	Node*temp = head;

	for (int i = 0; i < pos - 1; i++)
	{
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

void insert_head(Node* &head, int val)
{
	Node* newNode = new Node(val);
	newNode->next = head;
	head = newNode;
}
void insert_tail(Node* &head, Node* &tail, int val)
{
	Node* newNode = new Node(val);

	if (head == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	tail->next = newNode;
	tail = newNode;
}
int main() {
	// Node a,b;
	// a.val=10;
	// b.val=20;
	// a.next=&b;
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	Node* tail = d;
	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;
	print_linked_list(head);
	cout << "tail-> " << tail->val << endl;

	int pos, val;
	cout << "Pos: ";
	cin >> pos;

	if (pos > size(head))
	{
		cout << "Inavalid Index" << endl;
	}
	else if (pos == 0)
	{
		cout << "Val: ";
		cin >> val;
		insert_head(head, val);
	}
	else if (pos == size(head))
	{
		cout << "Val: ";
		cin >> val;
		insert_tail(head, tail, val);
	}
	else
	{
		cout << "Val: ";
		cin >> val;
		insert(head, pos, val);
	}

	print_linked_list(head);
	cout << "tail-> " << tail->val << endl;
	// cout<<(*a).val<<endl;
	// cout<<(*b).val<<endl;
	// cout<<a->val<<endl;
	// cout<<b->val<<endl;

	return 0;
}