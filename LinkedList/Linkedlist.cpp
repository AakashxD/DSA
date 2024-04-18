#include <iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(){
            this->data = 0;
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

Node* convertLlist(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
       mover->next=temp;
       mover=mover->next;
    }
    return head;

}
void print(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int lengthLList(Node* head){
    int c=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        c++;
    }
    return c;
}
int Search(Node* head,int val){
     Node* temp=head;
    while(temp){
       if(temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;
}

Node* deleteFirst(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deleteLast(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
       temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}
Node* deleteAtPosition(Node* head,int k){
    {
        if(head==nullptr){
            return NULL;
        }
        if(k==1){
            Node* temp= head;
            head=head->next;
            free(temp);
            return head;
        }
        Node* temp=head;
        int c=0;
        Node* prev=NULL;
        while(temp!=NULL){
            c++;
            if(k==c){
                prev->next=prev->next->next;
                free(temp);
                break;
            }
            prev=temp;
            temp=temp->next;
        }
    }
}
Node* deletekthElem(Node* head,int el){
    {
        if(head==nullptr){
            return NULL;
        }
        if(head->data==el){
            Node* temp= head;
            head=head->next;
            free(temp);
            return head;
        }
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL){
        
            if(temp->data==el){
                prev->next=prev->next->next;
                free(temp);
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
}
Node* insertHead(Node* head,int val){
     Node* temp=new Node(val,head);
     return temp;

}
Node* insertTail(Node* head,int val){
    if(head==NULL);
    return new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    newNode->next=NULL;
    return head;
}

int main(){
    vector<int> arr={12,5,6,3};
    Node* head=convertLlist(arr);
    // head= deletekthElem(head,5);
    print(head);
    
}