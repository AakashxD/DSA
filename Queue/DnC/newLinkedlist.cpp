#include<stdio.h>
#include<malloc.h>
struct node{
    int info;
    struct node *next;
};
void addBeg(struct node **s,int value){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->info=value;
    newNode->next=NULL;
    if(*s==NULL){
        *s=newNode;
    }
    else{
        newNode->next=*s;
        *s=newNode;
        printf("node is added\n");
    }
}
int main(){
    struct node *start=NULL;
    addBeg(&start,50);
    addBeg(&start,100);
}