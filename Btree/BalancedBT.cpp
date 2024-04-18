// the absolute difference between left right height should be < = 1
//
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};
int height(node* root){
     if(root==NULL){
        return 0;
     }
     int lh=height(root->left);
     int rh=height(root->right);
      return 1+max(lh,rh);// tc 0(n)
}
bool isBalanced(node* root){
    if(root==NULL){
        return true;
    }
    // 1 case
    int leftHeight=height(root->left);
    int rightHeight=(root->right);
    int diff=abs(leftHeight-rightHeight);

    bool rootAns=(diff<=1);
    int leftans=isBalanced(root->left);
    int rightans=isBalanced(root->right);
    if(rootAns && leftans && rightans){
        return true;
    }
    else
    return false;

}