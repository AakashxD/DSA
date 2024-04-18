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

void postorderIterative(Node* root) {
    if (root == nullptr) {
        return;
    }

    stack<Node*> s;
    Node* current = root;

    while (!s.empty() || current != nullptr) {
        // Push the root and its right child (if any) onto the stack
        while (current != nullptr) {
            if (current->right != nullptr) {
                s.push(current->right);
            }
            s.push(current);
            current = current->left;
        }

        // Pop the top node and check if it's a right child
        current = s.top();
        s.pop();

        if (!s.empty() && current->right == s.top()) {
            // If it's a right child, push it back onto the stack
            // and process its right subtree later
            s.pop();
            s.push(current);
            current = current->right;
        } else {
            // If it's not a right child, process it
            cout << current->data << " ";
            current = nullptr; // Mark as processed
        }
    }
}
node* buildfromlevelOrder(node* root){
    queue<node>* q;
    
}
// Example usage:
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Postorder traversal: ";
    postorderIterative(root);
    cout << endl;

    return 0;
}
// height diameter max depth