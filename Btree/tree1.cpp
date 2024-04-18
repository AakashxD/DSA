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

node* buildTree(){
    cout<<"Enter the Data"<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node* root = new node(data);
    cout<<"inserting in left "<<data<<endl;
    root->left=buildTree();
    cout<<"insert at right "<< data<<endl;
    root->right=buildTree();
    return root;
}

void levelOrderTraversial(node* head){
   queue<node*> q;
   q.push(head);
   q.push(NULL);
   while(!q.empty()){
    node* temp=q.front();
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
void inOrder(node* root){
    // base case
    if(root==NULL){
        return ;
            }
            inOrder(root->left);
            cout<<root->data<<" ";
          inOrder(root->right);
}
void preOrder(node* root){
    // base case
    if(root==NULL){
        return ;
            }
             cout<<root->data<<" ";
            preOrder(root->left);
            preOrder(root->right);
}
void postOrder(node* root){
    // base case
    if(root==NULL){
        return ;
            }
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data<<" ";
}

void buildFromLevelOrder(Node*& root) {
    queue<Node*> q;
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << "Enter left node for " << temp->data << ": ";
        int leftData;
        cin >> leftData;
        if(leftData != -1) {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout << "Enter right node for " << temp->data << ": ";
        int rightData;
        cin >> rightData;
        if(rightData != -1) {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
    node* root=NULL;
    // create tree;
 
    // 1 3  7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
//     cout << "Level Order Traversal: ";
//     levelOrderTraversial(root);  
//     cout<<"preOrder traversel";
//    preOrder(root);

//    buildformLevelOrder(root);
    root= buildTree(root);
   return 0;
}

