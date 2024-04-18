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

int main() {
    Node* root = buildTree();
    // Now you can use the 'root' pointer to access the tree.
    return 0;
}
