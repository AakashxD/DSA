// Counting approch 
#include<iostream>
using namespace std;
class Node {
    public: 
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* print(Node* head){
    Node* temp=head;
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
   }
}
void countno(Node* head){
    if(head==NULL|| head->next==NULL){
        return;
    }
    Node* temp=head;
    int k,zero,one,two;
    k=0;
    zero=0;
    one=0;
    two=0;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else{
            two++;
        }
        temp=temp->next;  
        
    }
    Node* curr=head;
    while(curr!=NULL){
        if(zero!=0){
            curr->data=0;
            zero--;
         
        }
       else if(one!=0){
           curr->data=1;
            one--;
          
        }
        else {
            curr->data=2;
            two--;
         
        }
        curr=curr->next;
    }
   
}
int main() {
    Node* head = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(1);
    Node* four = new Node(0);
    Node* five = new Node(1);
    Node* six = new Node(0);

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;
    countno(head);
    print(head);
    return 0;
}