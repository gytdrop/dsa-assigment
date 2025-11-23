#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;

};


class Queue {
    Node *front, *rear;

public:
    Queue() { front = rear = NULL; }

    bool isEmpty() {
        return front == NULL;
    }

    void enqueue(int val) {
        Node* temp = new Node();
        temp->data = val;
        temp->next = NULL;
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == NULL) rear = NULL;
        delete temp;
    }

    void display() {
        if (isEmpty()) return;
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};


int main() {
    Queue q;
    q.enqueue(10); q.enqueue(20);
    q.display();
    q.dequeue();
    q.display();
    return 0;

}