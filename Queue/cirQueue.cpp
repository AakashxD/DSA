#include<iostream>
#define SIZE 10
using namespace std;

class Queue {
    int front, rear, queue[SIZE];
public:
    Queue() {
        front = rear = -1;
    }
    bool isFull() {
        return ((rear+1)%SIZE == front);
    }
    bool isEmpty() {
        return (front == -1);
    }
    void enqueue(int value) {
        if(isFull()) {
            cout << "Circular queue is full";
        } else {
            rear = (rear+1)%SIZE;
            if(isEmpty()) {
                front = 0;
            }
            queue[rear] = value;
        }
    }
    void dequeue() {
        int value;
        if(isEmpty()) {
            cout << "Circular queue is empty";
        } else {
            value = queue[front];
            if(front == rear)//single Elem
             {
                front = rear = -1;
            } else {
                front = (front+1)%SIZE;
                cout << "Removed item=" << value << "\n";
            }
        }
    }
    void show() {
        if(isEmpty()) {
            cout << "Circular queue is empty";
        } else {
            cout << "Numbers are\n";
            int i = front;
            do {
                cout << queue[i] << " ";
                i = (i+1)%SIZE;
            } while(i != rear);
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.show();
    q.dequeue();
    q.dequeue();
    q.show();
    return 0;
}
