#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    Node* n1 = new Node();
    n1->data = 10;
    n1->next = NULL;
    head = n1;

    Node* n2 = new Node();
    n2->data = 20;
    n2->next = NULL;
    n1->next = n2;

    Node* n3 = new Node();
    n3->data = 40;
    n3->next = NULL;
    n2->next = n3;

    // Insert 30 at position 3
    Node* newNode = new Node();
    newNode->data = 30;

    Node* temp = head;

    for (int i = 1; i < 2; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}
