// #include<iostream>
// using namespace std;
#include <stdio.h>
#include <malloc.h>
struct Node
{   int info;
    struct Node *next;
};
int BinarySearch(struct Node *low,struct Node *high){
    do{
    struct Node *mid =getMid(low,high);
    if(mid->info == info)
        return 1;
    else if(mid->info > info)
    high = mid;
    else
    low=mid->next;     
    }while(high==NULL || high!=low);
    return 0;
}
