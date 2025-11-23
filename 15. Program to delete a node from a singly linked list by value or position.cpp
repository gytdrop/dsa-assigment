#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;

};


void insert(Node** head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;

}


void deleteValue(Node** head, int key) {
    Node* temp = *head;
    Node* prev = NULL;
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    delete temp;

}


void display(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;

}


int main() {
    Node* head = NULL;
    insert(&head, 30);
    insert(&head, 20); insert(&head, 10);
    display(head);
    deleteValue(&head, 20);
    display(head);
    return 0;

}