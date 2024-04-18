#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int coe;
    int pow;
    struct Node *next;
}Node;

Node * createNode(int coe, int pow){
    Node* newNode = (struct Node*)malloc(sizeof(Node));
    newNode->coe = coe;
    newNode->pow = pow;
    newNode->next = NULL;
    return newNode;
}
void addLast(Node **s, int coe, int pow){
    Node* newNode = createNode(coe, pow);
    if(*s == NULL){
       *s = newNode;
    }
    else{
        Node* temp = *s;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        
    }
}
void show(Node *temp){
    printf("%dX^%d",temp->coe,temp->pow);
    temp = temp->next;
    while (temp!=NULL)
    {
       if(temp->coe != 0){
    
        if (temp->coe>0)
            printf("+%dX^%d", temp->coe, temp->pow);
        else
            printf("%dX^%d", temp->coe, temp->pow);
        
       }else{

        if(temp->coe > 0)
            printf("+%d ", temp->coe);
        else
            printf("%d ",temp->coe);
       }
        temp = temp-> next;
    }
    

}
Node* addPolynomials(Node *poly1, Node *poly2) {
    Node *result = NULL;
    while (poly1 != NULL || poly2 != NULL) {
        int coe;
        int pow;
        
        if (poly1 == NULL) {
            coe = poly2->coe;
            pow = poly2->pow;
            poly2 = poly2->next;
        } else if (poly2 == NULL) {
            coe = poly1->coe;
            pow = poly1->pow;
            poly1 = poly1->next;
        } else {
            if (poly1->pow > poly2->pow) {
                coe = poly1->coe;
                pow = poly1->pow;
                poly1 = poly1->next;
            } else if (poly1->pow < poly2->pow) {
                coe = poly2->coe;
                pow = poly2->pow;
                poly2 = poly2->next;
            } else {
                coe = poly1->coe + poly2->coe;
                pow = poly1->pow;
                poly1 = poly1->next;
                poly2 = poly2->next;
            }
        }
     addLast(&result, coe, pow);
    }
    return result;
}

int main() {
    Node* pol1 = NULL;
    addLast(&pol1, 2, 5);
    addLast(&pol1, 39, 4);
    addLast(&pol1, 5, 2);
    Node* pol2 = NULL;
    addLast(&pol2, 3, 4);
    addLast(&pol2, 7, 2);
    addLast(&pol2, 10, 1);
    Node* sum = addPolynomials(pol1, pol2);
    show(sum);
    return 0;
}