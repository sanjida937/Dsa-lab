#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    // first node
    Node* n1 = new Node();
    n1->data = 20;
    n1->next = NULL;
    head = n1;

    // Insert 10 at beginning
    Node* newNode = new Node();
    newNode->data = 10;
    newNode->next = head;
    head = newNode;

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";// 10 20
        temp = temp->next;
    }

    return 0;
}
