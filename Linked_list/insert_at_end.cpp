#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node* head = NULL;

    // first node
    node* n1 = new node();
    n1->data = 10;
    n1->next = NULL;
    head = n1;

    // Insert 20 at end
    node* n2 = new node();
    n2->data = 20;
    n2->next = NULL;

    node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n2;

    // Insert 30 at end
    node* n3 = new node();
    n3->data = 30;
    n3->next = NULL;

    temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = n3;

    temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";//10 20 30
        temp = temp->next;
    }
}
