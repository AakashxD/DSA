#include<iostream>
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

Node* buildTree() {
    cout << "Enter the data: ";
    int data;
    cin >> data;
    if(data == -1) {
        return nullptr;
    }
    Node* root = new Node(data);
    cout << "Inserting in left of " << data << endl;
    root->left = buildTree();
    cout << "Inserting in right of " << data << endl;
    root->right = buildTree();
    return root;
}
Node* ConvertsumTree(Node* root){
      if(root==NULL){
        return 0;
      }
      int leftAns=ConvertsumTree(root->left);
      int rightAns=ConvertsumTree(root->right);
      root->data=leftAns+rightAns+root->data;
      return root->data;
    //   By returning root->data, the function allows each node to communicate its total sum to its parent node. This is a common pattern in recursive functions that traverse a tree, where information calculated in the child nodes needs to be passed up to the parent nodes. I hope this clarifies your doubt! 😊
      }
    //   
int main() {
    Node* root = buildTree();
    
    return 0;
}
