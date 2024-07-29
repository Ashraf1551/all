#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
class Node {
public:
	int val;
	Node* next;

	Node(int val) {
		this->val = val;
		this->next = nullptr;
	}
};

void insert_at_tail(Node*& head, int v) {
	Node* newNode = new Node(v);
	if (head == nullptr) {
		head = newNode;
		cout << "Inserted at Head" << endl << endl;
		return;
	}

	Node* temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = newNode;
	cout << "Inserted at Tail" << endl << endl;
}

void print_linked_list(Node* head) {
	cout << "Your Linked List: ";
	Node* temp = head;
	while (temp != nullptr) {
		cout << " -- " << temp->val << " -- ";
		temp = temp->next;
	}
	cout << endl << endl;
}

void insert_at_position(Node*& head, int pos, int v) {
	Node* newNode = new Node(v);
	Node* temp = head;

	if (pos < 0) {
		cout << "Invalid Index!!" << endl << endl;
		return;
	}

	if (pos == 0) {
		newNode->next = head;
		head = newNode;
		cout << "Inserted at Position 0 (Head)" << endl << endl;
		return;
	}

	for (int i = 0; i < pos - 1; i++) {
		if (temp == nullptr) {
			cout << "Invalid Index!!" << endl << endl;
			return;
		}
		temp = temp->next;
	}

	if (temp == nullptr) {
		cout << "Invalid Index!!" << endl << endl;
		return;
	}

	newNode->next = temp->next;
	temp->next = newNode;
	cout << "Inserted at Position " << pos << endl << endl;
}

void insert_at_head(Node*& head, int v) {
	Node* newNode = new Node(v);
	newNode->next = head;
	head = newNode;
	cout << "Inserted at Head" << endl << endl;
}

void delete_from_position(Node*& head, int pos) {
	if (head == nullptr) {
		cout << "List is empty. Cannot delete." << endl << endl;
		return;
	}

	if (pos < 0) {
		cout << "Invalid Index!!" << endl << endl;
		return;
	}

	if (pos == 0) {
		Node* deleteNode = head;
		head = head->next;
		delete deleteNode;
		cout << "Deleted Head" << endl << endl;
		return;
	}

	Node* temp = head;
	for (int i = 0; i < pos - 1; i++) {
		if (temp == nullptr || temp->next == nullptr) {
			cout << "Invalid Index!!" << endl << endl;
			return;
		}
		temp = temp->next;
	}

	Node* deleteNode = temp->next;
	temp->next = temp->next->next;
	delete deleteNode;
	cout << "Deleted from Position " << pos << endl << endl;
}

void delete_from_head(Node*& head) {
	if (head == nullptr) {
		cout << "List is empty. Cannot delete from head." << endl << endl;
		return;
	}

	Node* deleteNode = head;
	head = head->next;
	delete deleteNode;
	cout << "Deleted Head" << endl << endl;
}

int main() {
	Node* head = nullptr;

	while (true) {
		cout << "Option 01: Insert at Tail" << endl;
		cout << "Option 02: Print Linked List" << endl;
		cout << "Option 03: Insert at Any Position" << endl;
		cout << "Option 04: Insert at Head" << endl;
		cout << "Option 05: Delete from Position" << endl;
		cout << "Option 06: Delete from Head" << endl;
		cout << "Option 07: Terminate the Program" << endl;
		cout << "Please Enter an Option: ";

		int op;
		cin >> op;
		cout << endl;

		switch (op) {
		case 1: {
			int v;
			cout << "Please Enter Value for List: ";
			cin >> v;
			insert_at_tail(head, v);
			break;
		}
		case 2:
			print_linked_list(head);
			break;
		case 3: {
			int pos, v;
			cout << "Enter Desired Position: ";
			cin >> pos;
			cout << "Enter Value for List: ";
			cin >> v;
			insert_at_position(head, pos, v);
			break;
		}
		case 4: {
			int v;
			cout << "Please Enter Value for List: ";
			cin >> v;
			insert_at_head(head, v);
			break;
		}
		case 5: {
			int pos;
			cout << "Enter Desired Position: ";
			cin >> pos;
			delete_from_position(head, pos);
			break;
		}
		case 6:
			delete_from_head(head);
			break;
		case 7:
			cout << "Terminating the Program." << endl;
			return 0;
		default:
			cout << "Invalid option. Please try again." << endl << endl;
			break;
		}
	}

	return 0;
}
