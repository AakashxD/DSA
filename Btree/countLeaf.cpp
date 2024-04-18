#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

int inOrder(node* root,int count){
    // base case
    if(root==NULL){
        return ;
            }
            inOrder(root->left);
           if(root->left==NULL&&root->right==NULL){
            count++;
           }
          inOrder(root->right);
}
int main(){

}