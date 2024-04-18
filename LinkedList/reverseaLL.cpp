
// circular// no head and tail
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
Node* reverse(Node* &prev,Node* &curr){

    if(curr==NULL){
        return prev;   
    }
    Node* forward=curr->next;
}