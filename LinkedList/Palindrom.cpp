
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* newC = curr->next;
    while (curr != NULL) {
        newC = curr->next;
        curr->next = prev;
        prev = curr;
        curr = newC;
    }
    return prev;
}

bool checkPalindrome(Node* head) {
    if (head == NULL) {
        cout << "LL is Empty" << endl;
        return false;
    }
    if (head->next == NULL) {
        return true;
    }
    // 1->Node
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    // slow is pointing to middle
    Node* reverseHead = reverse(slow->next);
    slow->next = reverseHead;
    Node* temp1 = head;
    Node* temp2 = reverseHead;
    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data != temp2->data) {
            return false;
        }
        else{
        temp1 = temp1->next;
        temp2 = temp2->next;
        }
    }
    return true;
}
Node* RemoveDuplicate(Node* head){

}
int main() {
    Node* head = new Node(10);
    Node* two = new Node(20);
    Node* three = new Node(30);
    Node* four = new Node(40);
    Node* five = new Node(50);
    Node* six = new Node(60);

    head->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = NULL;

    bool isPalindrome = checkPalindrome(head);

    if (isPalindrome) {
        cout << "LL is palindrome";
    }
    else {
        cout << "No, it's NOT";
    }
}
