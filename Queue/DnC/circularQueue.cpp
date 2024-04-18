#include <stdio.h>
#define SIZE 5 // the maximum size of the queue

// declare the queue array and the front and rear pointers
int queue[SIZE];
int front = -1;
int rear = -1;

// a function to insert an element at the rear of the queue
void enqueue(int x) {
  // check if the queue is full
  if ((front == 0 && rear == SIZE - 1) || (rear + 1 == front)) {
    printf("Queue is full\n");
    return;
  }
  // increment the rear pointer circularly
  rear = (rear + 1) % SIZE;
  // insert the element at the rear position
  queue[rear] = x;
  // if the queue was empty, set the front pointer to 0
  if (front == -1) {
    front = 0;
  }
}

// a function to delete an element from the front of the queue
int dequeue() {
  // check if the queue is empty
  if (front == -1) {
    printf("Queue is empty\n");
    return -1;
  }
  // get the element at the front position
  int x = queue[front];
  // if the queue has only one element, reset the pointers to -1
  if (front == rear) {
    front = -1;
    rear = -1;
  }
  // otherwise, increment the front pointer circularly
  else {
    front = (front + 1) % SIZE;
  }
  // return the deleted element
  return x;
}

// a function to display the elements of the queue
void display() {
  // check if the queue is empty
  if (front == -1) {
    printf("Queue is empty\n");
    return;
  }
  // print the elements from front to rear
  printf("Queue: ");
  int i = front;
  while (i != rear) {
    printf("%d ", queue[i]);
    i = (i + 1) % SIZE;
  }
  printf("%d\n", queue[i]);
}

// a main function to test the queue operations
int main() {
  // insert some elements into the queue
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  enqueue(50);
  // display the queue
  display();
  // delete some elements from the queue
  printf("Deleted: %d\n", dequeue());
  printf("Deleted: