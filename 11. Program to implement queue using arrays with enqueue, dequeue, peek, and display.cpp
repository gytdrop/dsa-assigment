#include <iostream>

#define MAX 100

using namespace std;


class Queue {
    int front, rear;
    int arr[MAX];

public:
    Queue() { front = -1; rear = -1; }

    bool isFull() {
        return rear == MAX - 1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(int x) {
        if (isFull()) { 
            cout << "Queue Full\n"; 
            return; 
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
    }

    void dequeue() {
        if (isEmpty()) { 
            cout << "Queue Empty\n"; 
            return; 
        }
        front++;
    }

    void peek() {
        if (isEmpty()) 
            cout << "Queue Empty\n";
        else 
            cout << "Front: " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) return;
        for (int i = front; i <= rear; i++) 
            cout << arr[i] << " ";
        cout << endl;
    }

};


int main() {
    Queue q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    return 0;

}