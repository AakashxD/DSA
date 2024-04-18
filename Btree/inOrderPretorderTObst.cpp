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
    } } 
   }
}
// build tree from inorder and preorder traversal 
int position(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element)
        return i;
    }
    return -1;
}
node* buildTreeFromPreOrderInorder(int inOrder[],int preOrder[],int size,int &preIndex, int inOrderStart,int inOrderEnd){
    if(preIndex>=size || inOrderStart>inOrderEnd){
        return NULL;
    }
    int element=preOrder[preIndex++];
    node* root=new node(element);
    int pos=position(inOrder,size,element);// hashmap for o(1); order map 
    // step 2 
    root->left=buildTreeFromPreOrderInorder(inOrder,preOrder,size,preIndex,inOrderStart,pos-1);
    // step 3
    root->right=buildTreeFromPreOrderInorder(inOrder,preOrder,size,preIndex,pos+1,inOrderEnd);
    return root;
} 
//  we first recursively construct the right subtree from the postorder and inorder traversals before the left subtree. This is because the rightmost element in postorder traversal will be the root of the right subtree, not the left subtree.
node* buildTreeFromPosTorderinOrderIndex(int inOrder[],int postOrder[],int size,int &postIndex, int inOrderStart,int inOrderEnd){
       if(postIndex<0 || inOrderStart>inOrderEnd){
        return NULL;
       }
       int element = postOrder[postIndex];
       postIndex--;
       // step 2 
    node * root =new node(element);
    int pos=position(inOrder,size,element);
    root->right=buildTreeFromPostOrderinOrderInorder(inOrder,postOrder,size,postIndex,pos+1,inOrderEnd);
    return root;

    root->left=buildTreeFromPostinOrderOrderInorder(inOrder,postOrder,size,postIndex,inOrderStart,pos-1);
    // step 3

}
int main(){
     int inOrder[]={40,20,50,10,60,30,70};
     int preOrder[]={10,20,40,50,30,60,70};
     int size=7;
     int preIndex=0;
     int inOrderStart=0;
     int inOrderEnd=size-1;
     cout<<"print ";
     node* root=buildTreeFromPreOrderInorder(inOrder,preOrder,size,preIndex,inOrderStart,inOrderEnd);
     cout<<"print the traversal"<<endl;
     levelOrderTraversial(root);
     return 0;
}