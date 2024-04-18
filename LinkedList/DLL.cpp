#include <iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* back;
        public:
        Node(int data1,Node* next1, Node* back1){
          data = data1;
          next =next1;
          back=back1;
        }
        public:
        Node(int data1){
            data = data1;
            next =nullptr;
            back=nullptr;
        }
};
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
      }
}
Node* convertArr2DLL(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
       prev->next=temp;
       prev=prev->next;
    }
    return head;
}
Node* deletedHead(Node* head){
  if(head==NULL || head->next==NULL){
    return NULL;
  }
  Node* prev=head;
  head=head->next;
  head->back=nullptr;
  prev->next=nullptr;
  delete prev;
  return head;
  }
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
    return NULL;
  }   
  Node* tail=head;
  while(tail->next!=NULL)  {
    tail=tail->next;
  }
  Node* newTail=tail->back;
  newTail->next=nullptr;
  tail->back=nullptr;
  delete tail;
  return head;
}
Node* deleteKth(Node* head,int k){
 if(head==NULL){
    return NULL;
  }
 int c=0;
 Node* temp=head;
 while(temp->next!=NULL){
     c++;
   if(c==k)break;
   temp=temp->next;
 }
 Node* prev=temp->back;
 Node* front=temp->next;
 if(prev==NULL || front==NULL){
    return NULL;
 }
 else if(prev==NULL){
    return deletedHead(head);
 }
 else if(front==NULL){
    return deleteTail(head);
 }
 prev->next=front;
 front->back=prev;
 temp->next=nullptr;
 temp->back=nullptr;
 delete temp;
 return head;
}
Node* deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
    }
    }
int main(){
  vector<int> arr={12,5,8,7};
  Node* head=convertArr2DLL(arr);
  deleteTail(head);
  deleteKth(head,2);
  print(head);
  return 0;
}