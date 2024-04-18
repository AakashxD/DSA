#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};
// In Order Of BST is always sorted
void levelOrderTraversial(Node* root){
   queue<Node*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
    Node* temp=q.front();
    q.pop();
    if(temp==NULL){
        cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      } }
      else {
        cout<<temp->data<<" ";
        if(temp->left){
        q.push(temp->left);    
         }
        if(temp->right) {
        q.push(temp->right);  
       }
        } 
   }
}
int minValue(Node* root){
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->left;
}
int main(){
    Node* root=NULL;
    levelOrderTraversial(root);
 
}