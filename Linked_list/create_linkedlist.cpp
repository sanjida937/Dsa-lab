#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
  //create a linked list
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    Node* temp = head;
  //display all the elements in the list

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
