#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int data1){
        this->data=data1;
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
Node* RemoveDuplicate(Node* head){
    if(head==NULL){
        cout<<"LL IS EMPTY";
        return NULL;
    }
    if(head->next==NULL){
        cout<<"SIngle node in linkedList";
        return head;
    }
    Node* curr=head;
    while(curr!=NULL){
        if(( curr->next!=NULL) &&( curr->data == curr->next->data))
        // data access should nt from nuLL;
        {
            Node* temp=curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;
            // delete Node
        }
        else{
            curr=curr->next;
        }
    }
}
int main() {
    Node* head = new Node(1);
    Node* two = new Node(2);
    Node* three = new Node(7);
    Node* four = new Node(3);
    Node* five = new Node(4);
    Node* six = new Node(4);

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;
    RemoveDuplicate(head);
    print(head);
    return 0;
}