#include<stdio.h>
#define SIZE 10
int front,rear;
int queue[SIZE];
void Reset(){
    front=rear=-1;
}
int isEmpty(){
    return front==-1;
}
int isFull(){
    return rear==SIZE-1;
}
void show(){
if(isEmpty()){
    printf("queue is empty");
}
else{
    for(int i=front;i<=rear;i++){
        printf("%d\t",queue[i]);
    }
}
}
void Enqueue(int value){
//insertion when queue is not full
if(isFull()){
    printf("queue is full\n");
    return;
}
else{
   
    if(rear==-1){
        front=0;
    }
    queue[++rear]=value;
    printf("value is added\n");
}
}
void Dequeue(){
    if(isEmpty()==1){
        printf("queue is empty\n");
    }
    // insertion is not posible after deletion 
    else{
        printf("removed item:%d\n",queue[front]);
        front++;
        if(front>rear){
       Reset();
        }
    }
}
int main(){
    Reset();
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    show();
    Dequeue();
    Dequeue();
    show();
    return 0;
}