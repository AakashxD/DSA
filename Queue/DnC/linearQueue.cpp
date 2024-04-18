#include<stdio.h>
#define SIZE 10

typedef struct LinQueue{
    int front;
    int rear;
    int data[SIZE];
}LinQueue;
LinQueue queue;
int isEmpty(){
    if(queue.front>queue.rear){
        queue.front=0;
        queue.rear=-1
    }
}
int isFull(){
    return queue.rear=SIZE-1;
}
void enQue(){
    if(isFull()){
        printf("Queue is Full");
        return;
    }
    int num;
    printf("Enter any Number");
    scanf("%d",&num);
    queue.rear+=1;
    queue.data[queue.rear]=num;
}
int deque(){
    if(isEmpty()){
        printf("queue is empty");
        return -1;
    }
    int a=queue.data[queue.front];
    queue.front+=1;
    printf("%d is deleted\n",a);
    return a;
}
void show(){
    if(isEmpty){
        printf("queue is Empty");
        return;
    }
    printf("queue element are: \n");
    for(int i=queue.front;i<=queue.rear;i++){
        printf("%d",queue.data[i]);
    }
}
for()
int main(){
    queue.front=0;
    queue.rear=-1;
}