#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;
    Stack(int size){
        arr= new int[size];
        this->size=size;
        top=-1;
    }
void push(int data){
    if(size-top >1){ // size-top=1 means full 
    top++;
    arr[top]=data;   
    }
    else{
        cout<<"over flow condition"<<endl;
    }
}
void pop(){
  if(top==-1){
    // stack is empty
    cout<<"stack UnderFlow"<<endl;
}
else{
    // stack is not empty
    top--;
}
}
int getTop(){
    if(top==-1){
        cout<<"tack underflow";
    }
    else{
        return arr[top];
    }
}
int isEmpty(){
    if(top==-1)
   {
     return true;
   }

else{
     return false;
}

}
int getSize(){
    return top+1;
}
};
int main(){
    Stack s(10);
    s.push(10);
    s.push(60);
    s.push(50);
    s.push(100);
    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }   
 
return 0;
}