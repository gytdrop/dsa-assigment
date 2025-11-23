#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;

};


class Stack {
    Node* top;

public:
    Stack() { top = NULL; }

    bool isEmpty() {
        return top == NULL;
    }

    void push(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void peek() {
        if (!isEmpty()) 
            cout << "Top: " << top->data << endl;
        else
            cout << "Stack is Empty" << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return;
        }
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};


int main() {
    Stack s;
    s.push(10); s.push(20); s.push(30);
    s.display();
    s.pop();
    s.display();
    return 0;

}