// the deQueue operation perform on the bases of priority
// in priority either enQueue or DeQueue operation will take order o(n) in opposite will take constant time.
#include<stdio.h>
#define SIZE 10
int front,rear;
int queue[SIZE];
int isFull(){
  return  rear==SIZE-1;
}
int isEmpty(){
    return front==-1;
    }
void show(){
    if(isEmpty()==1){
        printf("Queue is empty");
    }
    else{
    for(int i=front;i<=rear;i++){
        printf("%d\t",queue[i]);
    }
    }
}
void init(){
    front=-1;
    rear=-1;
}

void inQueue(int  value){
   if(isFull()==1) 
    return;
     rear++;
  if(rear==0){
    front=0;
  }
  queue[rear]=value;
}
void updatedeQueue(){
    for(int i=rear;i>front;i--){
        if(queue[i]<queue[i-1]){
            int t=queue[i];
            queue[i]=queue[i-1];
            queue[i-1]=t;
        }
    }
}
void updateinqueue(){
    int key = queue[rear];
        int i = rear-1;
        while (i>= front && queue[i] > key) 
        {
            queue[i + 1] = queue[i];
            i = i - 1;
        }
        queue[i + 1] = key;
    }
// in deQueue Operation 
void deQueue(){
    updatedeQueue();
    if(isEmpty()==1){
        printf("Empty");
    }
    int value=queue[front];
    front++;
    if(front>rear){
     init();
    }
    printf("item Removed=%d ",value);
}
  
int main(){
   init();
   inQueue(9);
   inQueue(6);
   inQueue(2);
   inQueue(5);
   inQueue(6);
   inQueue(2);
   inQueue(9);
   deQueue();
   // deQueue();
   show();
}