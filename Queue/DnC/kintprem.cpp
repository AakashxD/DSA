#include<stdio.h>
#include<malloc.h>
struct node{
    int info;
    struct node *next;
};
void show(struct node *temp){
    if (temp==NULL){
        printf("Empty List");
    }
    while(temp!=NULL){
        printf("%d\t",temp->info);
        temp=temp->next;
    }
}
void incr1(int num){
    num=num+10;
}
void incr2(struct node *temp){
    temp->info=temp->info+10;
}
int main(){
    // struct node *start; 
    // struct node *temp;
    // for(int i=1;i<=5;i++){
    //     temp=(struct node *)malloc(sizeof(struct node));
    //     temp->info=i*10;
    //     if(i==1){
    //     start=temp;
    //     start->next=NULL;
    //     }
    //     else{
    //         temp->next=start;
    //         start=temp;
    //     }
    // }
    // show(start);
    int num=50;
    incr1(num);
    printf("num=%d\n",num);
    struct node *s=(struct node *)malloc(sizeof(struct node));
    s->info=100;
    incr2(s);
    printf("%d",s->info);
    return 0;
}