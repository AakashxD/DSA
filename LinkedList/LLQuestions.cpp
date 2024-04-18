// // tortories algo
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// Node* getMiddle(Node* &head){
//     if(head==NULL){
//         return head;
//     }
//     if( head->next==NULL){
//         return head;
//     }
//     Node* head=first;
//     Node* head=second;
// while(first->next!=null){
//    first= first->next{
//     if(first->next!=null){
//         first=first->next;
//         second=second->next;
//     }
//    }
// }
// return second;
// }
// void print(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<< temp->data<<" ";
//         temp=temp->next; 
//     }
//     cout<<endl;;
// }
// int main(){
//    Node* head=new Node(10);
//       Node* two=new Node(10);
//          Node* three=new Node(10);
//             Node* four=new Node(10);
//                Node* five=new Node(10);
//                  Node* six=new Node(10);
//   head->next=two;
//  two->next=three;
// three->next=four;
// four->next=five;
//   five->next=six;
//   six->next=NULL;
//   print(head);
//  cout<< getMiddle(head)->data<<endl;

  
//   return 0;
// }
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

// Node* getMiddle(Node* head) {
//     if (head == NULL) {
//         return head;
//     }

//     Node* first = head;
//     Node* second = head;

//     while (first != NULL && first->next != NULL) {
//         first = first->next;
//         if (first != NULL) {
//             first = first->next;
//             second = second->next;
//         }
//     }

//     return second;
// }

Node* getMiddle(Node* &head){
    if(head==NULL){
        return head;
    }
    if( head->next==NULL){
        return head;
    }
    Node* first=head;
    Node* second=head;
while(first->next!=NULL){
   first= first->next;
    if(first->next!=NULL){
        first=first->next;
        second=second->next;
    }
   }
   return second;
}
int getLength(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}  /// vwery imp
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


void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void isCircular(Node* head){
    Node* new=head;
    new=new->next;
    while(new!=NULL){
        if(new==head){
            cout<<"circular";
        }
        new=new->next;
    }

}
// detect and delete loop

int main() {
    Node* head = new Node(10);
    Node* two = new Node(20);
    Node* three = new Node(30);
    Node* four = new Node(40);
    Node* five = new Node(50);
    Node* six = new Node(60);

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;

    print(head);
    cout << "Middle element: " << getMiddle(head)->data << endl;

    return 0;
}
