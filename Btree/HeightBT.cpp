#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int data) {
        this->data = data;
        left = right = nullptr;
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
int height(node* root){
     if(root==NULL){
        return 0;
     }
     int lh=height(root->left);
     int rh=hieght(root->right);
      return 1+max(lh,rh);// tc 0(n)
}
// longest path
// path does not need to pass via root 
int Diameter(node* root){
   if(root==NULL){
    return 0;
   }
   // o(n2) bad time complexity optimize..

//    int op1=Diameter(root->left);
//    int op2=Diameter(root->right);
//    int op3=height(root->left)+height(root->right)+1;
//    int ans=max(op1,(op2,op3));
//    return ans;

}

int main() {
    Node* root = buildTree();
    // Now you can use the 'root' pointer to access the tree.
    return 0;
}
