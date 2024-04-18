
// #include <iostream>
// #include<vector>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node* next;
//         Node(){
//             this->data = 0;
//             this->next = NULL;
//             this->back=NULL;
//         }
//         Node(int data){
//             this->data = data;
//             this->back=NULL;
//             this->next = NULL;
//         }
// };
// Node* convertArr2DLL(vector<int> &arr)
// {
//     Node* head=new Node(arr[0]);
//     Node* prev=head;
//     for(int i=1;i<arr.size();i++){
//         Node* temp=new Node(arr[i],nullptr,prev);
//        prev->next=temp;
//        prev=prev->next;
//     }
//     return head;

// }
// void print(Node* head){
//   while(head->next!=NULL){
//     cout<<head->data<<" ";
//     head=head->next;
//   }
// }
// Node *deletedHead(Node* head){
//   if(head==NULL || head->next==NULL){
//     return NULL;
//   }
//   Node* prev=head;
//   head=head->next;
//   head->back=nullptr;
//   prev->next=nullptr;
//   delete prev;
//   return head;

//   }
// Node* deleteKth(Node* head,int k){
//   int count=0;
//   Node* temp=head;
// while(temp!=NULL){
//     count++;
//   if(count==k){
//     break;
//   }
//   temp=temp->next;
// }

// }
// int main(){
//   vector<int> arr={12,5,8,7};
//   Node* head=convertArr2DLL(arr);
//   print(head);
//   return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back; // Added back pointer

    // Default constructor
    Node() {
        this->data = 0;
        this->next = nullptr;
        this->back = nullptr;
    }

    // Constructor with data parameter
    Node(int data, Node* next, Node* back) {
        this->data = data;
        this->next = next;
        this->back = back;
    }
};

Node* convertArr2DLL(vector<int>& arr) {
    // Initialize head with the default constructor
    Node* head = new Node();
    head->data = arr[0];

    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        // Use the constructor with three parameters
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = prev->next;
    }

    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* deleteHead(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }

    Node* newHead = head->next;
    newHead->back = nullptr;
    delete head;
    return newHead;
}

Node* deleteKth(Node* head, int k) {
    if (head == nullptr) {
        return nullptr;
    }

    int count = 1;
    Node* temp = head;

    while (temp != nullptr && count < k) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        // K is greater than the length of the list
        return head;
    }

    // Assuming you want to delete the kth node
    Node* prev = temp->back;
    prev->next = temp->next;

    if (temp->next != nullptr) {
        temp->next->back = prev;
    }

    delete temp;
    return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertArr2DLL(arr);
    print(head);

    // Example of deleting the head
    head = deleteHead(head);
    cout << "\nAfter deleting the head: ";
    print(head);

    // Example of deleting the kth node (assuming k = 2)
    int k = 2;
    head = deleteKth(head, k);
    cout << "\nAfter deleting the kth node: ";
    print(head);

    return 0;
}

