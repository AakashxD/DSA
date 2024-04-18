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
bool checkForloop(Node* head){
    if(head==NULL){
       return false;
    }
    Node* slow=head;
    Node* fast=head;
   
    while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
  fast=fast->next;
  slow=slow->next;
    }
    if(slow==fast)
    return true;
    }
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// check loop, starting point 
int main() {
    Node* head = new Node(10);
    Node* two = new Node(20);
    Node* three = new Node(30);
    Node* four = new Node(40);
    Node* five = new Node(50);
    Node* six = new Node(60);
    Node* seven = new Node(70);
    Node* eight = new Node(80);
    Node* ninth = new Node(90);

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next=eight;
    eight->next=ninth;
    ninth->next=five;
    cout<<checkForloop(head)<<endl;
    return 0;
}