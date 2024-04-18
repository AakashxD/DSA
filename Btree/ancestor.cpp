#include<iostream>
#include<vector>
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
Node* lowestCommonAncestor(Node* root,Node* p,Node* q){
    if(root==NULL){
        return NULL;
    }
    if(root->data==p->data){
        return p;
    }s
    if(root->data==q->data){
        return q;
    }
    Node* leftans=lowestCommonAncestor(root->left,p,q);
    Node* rightans=lowestCommonAncestor(root->right,p,q);
    if(leftans==NULL && rightans==NULL){
        return NULL;
    }
   else if(leftans!=NULL && rightans==NULL){
        return leftans;
    }
   else if(leftans==NULL && rightans!=NULL){
        return rightans;
    }
   else{// not null
        return root;
    }
}
// gfg
bool kthAncestor(Node* root,int p,int& k){
    if(root==NULL){
        return false;
    } 
    if(root->data==p){
        return true;
    }
    
     bool leftans=kthAncestor(root->left,p,k);
     bool rightans=kthAncestor(root->right,p,k);
     if(leftans==true || rightans==true){
        k--;
     }
     if(k==0){
        cout<<"hello ahole"<<root->data<<endl;
        k=-1;
     }
     return leftans||rightans;

}  
//   1
//2     3
// 4 5
// path sum from root node to leaf node
void Solve(Node* root,int currSum,vector<int> path,vector<vector<int>> &ans){
    if(root==NULL){
        return;
    }
    // leaf Node
    if(root->left==NULL && root->right==NULL){
        path.push_back(root->data);
    currSum+=root->data;
        if(currSum==tgSum);
        ans.push_back(path);
    }
    path.push_back(root->data);
    currSum+=root->data;
    solve(root->left,tgSum,currSum,path,sum);
    solve(root->right,tgSum,currSum,path,sum);
}
vector<vector<int>> pathSun(Node* root,int tgSum){
    vector<vector<int>> ans;
    int sum=0;
    vector<int> temp;
    solve(root,tgSum,sum,temp,ans);
    return sum;
}

int main(){
    Node* root=NULL;
    root=buildTree();
    int k=1;
    int p=4;
    bool found=kthAncestor(root,p,k);
}