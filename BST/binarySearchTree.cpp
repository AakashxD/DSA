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
// deletion on tree such that leaf nodes created linkedlist remains  same 
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

Node* insertIntoBST(Node* root,int data){
     if(root==NULL){
         root=new Node(data);
         return root;
     }
     if(root->data > data){
           root->left=insertIntoBST(root->left,data);
     }
     else{
        root->right=insertIntoBST(root->right,data);
     }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

void inOrder(Node* root){
        if(root==NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

void postOrder(Node* root){
      if(root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
Node* findNodeInBST(Node* root,int target){
    // TC average  o(H) -> 0(logn);
    // worst case skew tree o(n);
    if(root==NULL){
        return NULL;
    }
    if(root->data== target){
        return root;
    }
    if(root->data > target){
        return findNodeInBST(root->left,target);
    }
    else{
        return findNodeInBST(root->right,target);
    }
    return root;
}
int minValue(Node* root){
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
int maxValue(Node* root){
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
Node* deletedIntoBST(Node* root,int target){
         if(root==NULL){
            return root;
         }  
         Node* temp=findNodeInBST(root,target);
         if(temp->left==NULL && temp->right==NULL){
            delete temp;
            return NULL;
         }
         else if(temp->left==NULL && temp->right!=NULL){
            Node* child=temp->right;
            delete temp;
           return child;
         }
         else if(temp->right==NULL && temp->left!=NULL){
            Node* child=temp->left;
            delete temp;
            return child;
         }
         else{
              //  both child exist krte hai!!
              
                       }
}
int main(){
     Node* root =NULL;
     cout<<"Enter The DATA for RooT"<<endl;
     takeInput(root);
     cout<<"print The tree"<<endl;
     levelOrderTraversial(root);

     cout<<"\nInorder: ";
     inOrder(root);
     cout<<"\nPostOrder: ";
     postOrder(root);
   findNodeInBST(root,155);
   
    cout<< "MINIMUN"<<minValue(root)<<endl;

     return 0;
}
