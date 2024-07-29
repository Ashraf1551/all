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


void insert_at_tail(Node *&head, int v)
{
	Node *newNode = new Node(v);
	if (head == NULL)
	{
		head = newNode;
		cout << endl
			 << "Inserted at Head" << endl
			 << endl;
		return;
	}

	Node *temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	cout << endl
		 << "Inserted at Tail" << endl
		 << endl;
}


void print_linked_list(Node *head)
{
	cout << endl;
	cout << "Your Linked List: ";
	Node *temp = head;
	while (temp != NULL)
	{

		cout << " -- " << temp->val << " -- ";
		temp = temp->next;
	}
	cout << endl
		 << endl;
}


void insert_at_position(Node *head, int pos, int v)
{
	Node *newNode = new Node(v);
	Node *temp = head;

	for (int i = 0; i < pos - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			cout << endl
				 << "Invalid Index!!" << endl
				 << endl;
			return;
		}
	}
	newNode->next = temp->next;
	temp->next = newNode;
	cout << endl
		 << endl
		 << "Inserted at Position " << pos << endl
		 << endl;
}


void insert_at_head(Node *&head, int v)
{
	Node *newNode = new Node(v);
	newNode->next = head;
	head = newNode;
	cout << endl
		 << "Inserted at Head" << endl
		 << endl;
}


void delete_from_position(Node *head, int pos)
{
	Node *temp = head;
	for (int i = 0; i < pos - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			cout << endl
				 << "Invalid Index!!" << endl
				 << endl;
		}
	}
	if (temp->next == NULL)
	{
		cout << endl
			 << "Invalid Index!!" << endl
			 << endl;
	}
	Node *deleteNode = temp->next;
	temp->next = temp->next->next;
	delete deleteNode;
	cout << endl
		 << "Deleted from Position " << pos << endl
		 << endl;
}


void delete_from_head(Node *&head)
{
	if (head == NULL)
	{
		cout << endl
			 << "Head is Not Available!!" << endl
			 << endl;
		return;
	}
	Node *deleteNode = head;
	head = head->next;
	delete deleteNode;
	cout << endl
		 << "Deleted Head " << endl
		 << endl;
}


int main()
{
	Node *head = NULL;

	while (true)
	{
		cout << "Option 01: Insert at Tail" << endl;		 // done
		cout << "Option 02: Print Linked List" << endl;		 // done
		cout << "Option 03: Insert at Any Position" << endl; // done
		cout << "Option 04: Insert at Head" << endl;		 // done
		cout << "Option 05: Delete from Position" << endl;	 // done
		cout << "Option 06: Delete from Head" << endl;		 // done
		cout << "Option 07: Terminate the Programe" << endl; // done
		cout << "Please Enter an Option:";


		int op;
		cin >> op;
		cout << endl
			 << endl;


		if (op == 1)
		{
			cout << "Please Enter Value for List: ";
			int v;
			cin >> v;
			insert_at_tail(head, v);
		}


		else if (op == 2)
		{
			print_linked_list(head);
		}


		else if (op == 3)
		{
			int pos, v;
			cout << "Enter Your Desired Pos: ";
			cin >> pos;
			cout << "Please Enter Value for List: ";
			cin >> v;
			if (pos == 0)
			{
				insert_at_head(head, v);
			}
			else
			{
				insert_at_position(head, pos, v);
			}
		}


		else if (op == 4)
		{
			int v;
			cout << "Please Enter Value for List: ";
			cin >> v;
			insert_at_head(head, v);
		}


		else if (op == 5)
		{
			int pos;
			cout << "Enter Your Desired Pos: ";
			cin >> pos;
			if (pos == 0)
			{
				delete_from_head(head);
			}
			else
			{
				delete_from_position(head, pos);
			}
		}


		else if (op == 6)
		{
			delete_from_head(head);
		}


		else if (op == 7)
		{
			break;
		}

		
	}
	return 0;
}