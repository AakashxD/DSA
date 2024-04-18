#include<iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int value) {
        if (top2 - top1 == 1) {
            cout << "Overflow";
        }
        else {
            top1++;
            arr[top1] = value;
        }
    }

    void pop1() {
        if (top1 == -1) {
            cout << "Underflow" << endl;
        }
        else {
            top1--;
        }
    }

    void push2(int value) {
        if (top2 - top1 == 1) {
            cout << "Overflow";
        }
        else {
            top2--;
            arr[top2] = value;
        }
    }

    void pop2() {
        if (top2 == size) {
            cout << "Underflow" << endl;
        }
        else {
            top2++;
        }
    }
};

int main() {
    int size = 10;
    Stack stack(size);

    // Test push and pop operations
    stack.push1(5);
     cout<<"hekko 2 "; 
    stack.push2(10);
    cout<<"hekko";

    // Clean-up
    delete[] stack.arr;

    return 0;
}
