#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {  // Corrected the constructor to initialize data.
        this->data = data;
        this->next = NULL;
    }
};
Node* reverseKNode(Node* &head,int k ){
    if(head==NULL){
        return NULL;  
    }
    int l=getLength(head);
    if(l<k){
       return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    int count =0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    // rec
    if(forward!=NULL){
        head->next=reverseKNode(forward,k)
    }
   return prev;
}