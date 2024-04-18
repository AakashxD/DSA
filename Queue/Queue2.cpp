#include<iostream>
using namespace std;
class Queue{
    int* array;
    int size;
    int front;
    int rear;
    public:
    Queue(){
        size=10000;
        arr=new int[size];
        rear=0;
        front=0;
    }
    void enQueue(int value){
        if(rear==size){
            cout<<"full"<<" ";
        }
        else{
          arr[rear]=value;
          rear++;
        }
    }
    void deQueue(int data){
        if(front==rear){
          return -1;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    int qfront(){
       if(front==rear){
        return -1;
       }
       else{
        return arr[front];
       }
    }
int main(){

}
};