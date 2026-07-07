





#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Insert at Tail
void Insertnode(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Print Linked List
void Printnode(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    // Create first node
    Node* node2 = new Node(14);

    cout << node2->data << endl;
    cout << node2->next << endl;

    // Initially both head and tail point to first node
    Node* head = node2;
    Node* tail = node2;

    // Insert nodes
    Insertnode(tail, 18);
    Printnode(head);

    Insertnode(tail, 26);
    Printnode(head);

    return 0;
}
