#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;

};


Node* createNode(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;

}


void insertBegin(Node** head, int val) {
    Node* newNode = createNode(val);
    newNode->next = *head;
    *head = newNode;

}


void insertEnd(Node** head, int val) {
    Node* newNode = createNode(val);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* last = *head;
    while (last->next != NULL) last = last->next;
    last->next = newNode;

}


void insertMiddle(Node* head, int pos, int val) {
    Node* newNode = createNode(val);
    Node* temp = head;
    for(int i=0; i<pos-1 && temp!=NULL; i++) temp = temp->next;
    if(temp != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
    }

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
    insertEnd(&head, 10);
    insertBegin(&head, 5);
    insertEnd(&head, 20);
    insertMiddle(head, 2, 15);
    display(head);
    return 0;

}