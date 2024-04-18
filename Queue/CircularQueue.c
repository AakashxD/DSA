#include<stdio.h>
#define SIZE 10
int front,rear,queue[SIZE];
void init(){
    front=rear=-1;
}
int isFull(){
    if((rear+1)%SIZE==front)
    return 1;
    else
    return 0;
}
int isEmpty(){
if(front==-1){
    return 1;
}
else{
    return 0;
}

}
void enqueue(int value){
    if(isFull()==1){
        printf("Circular queue is full");
    }
    else{
        rear=(rear+1)%SIZE;
        if(isEmpty()==1){
            front=0;
        }
        queue[rear]=value;
    }
}
void dequeue(){
    int value;
    if(isEmpty()==1){
        printf("Circular queue is empty");
    }
    else{
        value=queue[front];
        if(front==rear){
             init();
        }
        else{
            front=(front+1)%SIZE;
            printf("removed item=%d\n",value);
        }
    }
}
void show(){
if(isEmpty()){
    printf("Circular queue is empty");
}
else{
    printf("Numbers are\n");
    int i=front;
    do{
        printf("%d ",queue[i]);
        i=(i+1)%SIZE;
    }while(i!=rear);
}

}

int main(){
    init();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    show();
    dequeue();
    dequeue();
    show();
}