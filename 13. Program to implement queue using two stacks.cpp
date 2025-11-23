#include <iostream>

using namespace std;


class Queue {
    int s1[100], s2[100];
    int top1, top2;

public:
    Queue() { top1 = -1; top2 = -1; }

    bool isStack1Empty() { return top1 == -1; }
    bool isStack2Empty() { return top2 == -1; }

    void push1(int x) { s1[++top1] = x; }
    int pop1() { return s1[top1--]; }
    void push2(int x) { s2[++top2] = x; }
    int pop2() { return s2[top2--]; }

    void enqueue(int x) {
        push1(x);
    }

    void dequeue() {
        if (isStack1Empty() && isStack2Empty()) return;
        if (isStack2Empty()) {
            while (!isStack1Empty()) {
                push2(pop1());
            }
        }
        cout << "Dequeued: " << pop2() << endl;
    }

};


int main() {
    Queue q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    q.dequeue();
    q.dequeue();
    return 0;

}