/*
Two types
1.input restricted
2.output restricted
*/
#include <stdio.h>
#define SIZE 10
int front, rear;
int queue[SIZE];

void init(){
    front = rear = 1;
}

int isEmpty(){
    if (front == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(){
    if (rear == SIZE-1)
    {
        return 1;
    }
    return 0;
}

void enqueue(int value){
    if (isFull() == 1)
    {
        printf("Queue is full");
        return;
    }
    rear++;
    if (rear == 0)
    {
        front = 0;
    }
    queue[rear] = value;
    
    
} 
void dequeue(){
    int choice, value;
    printf("1:from rear\n2:from front: ");
    scanf("%d", choice);
    if (choice == 1)
    {
        value = queue[front];
        front++;
    }
    else if(choice == 2){
        value = queue[rear];
        rear--;
    }
    else{
        printf("Invalide choice");
        return;
    }
    printf("Remove Value: %d", value);
    if (front>rear)
    {
        init();
    }
}
void show(){
    if(isEmpty() == 1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Number are: \n");
    for (int i = front; i <= rear; i++)
    {
       printf("%d ", queue[i]);
    }
    printf("fornt:%d rear:%d", front, rear); 
}
int main(){
    init();
    for(int i=1;i<=11;i++){
        enqueue(i*10);
    }
    show();
    dequeue();
    show();
    dequeue();
}
