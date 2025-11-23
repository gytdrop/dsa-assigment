#include <iostream>

#define MAX 100

using namespace std;


class Stack {
    int top;

public:
    int a[MAX];
    
    Stack() { top = -1; }
    
    bool isFull() {
        return top == MAX - 1;
    }
    
    bool isEmpty() {
        return top == -1;
    }
    
    void push(int x) {
        if (isFull()) {
            cout << "Overflow\n";
        } else {
            a[++top] = x;
        }
    }
    
    void pop() {
        if (isEmpty()) {
            cout << "Underflow\n";
        } else {
            cout << a[top--] << " popped\n";
        }
    }
    
    void peek() {
        if (isEmpty()) {
            cout << "Empty\n";
        } else {
            cout << "Top: " << a[top] << endl;
        }
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return;
        }
        for(int i = top; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

};


int main() {
    Stack s;
    s.push(10); s.push(20); s.push(30);
    s.display();
    s.pop();
    s.peek();
    return 0;

}