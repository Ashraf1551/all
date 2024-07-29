#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void insert(Node *&head, Node *&tail, int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void print_list(Node *head) {
    Node *tmp = head;
    while (tmp != nullptr) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void remove_duplicates(Node *&head) {
    if (head == nullptr || head->next == nullptr)
        return;

    Node *outer = head;
    while (outer != nullptr && outer->next != nullptr) {
        Node *inner = outer;
        while (inner->next != nullptr) {
            if (outer->val == inner->next->val) {
                Node *duplicate = inner->next;
                inner->next = inner->next->next;
                delete duplicate;
            } else {
                inner = inner->next;
            }
        }
        outer = outer->next;
    }
}

int main() {
    Node *head = nullptr;
    Node *tail = nullptr;
    int value;
    while (cin >> value) {
        if (value == -1)
            break;
        insert(head, tail, value);
    }

    remove_duplicates(head);
    print_list(head);

    return 0;
}
