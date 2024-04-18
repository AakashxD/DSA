#include<iostream>
#include <linkedlist.h>
struct Node* fast=head;
struct Node* slow=head;
#include <stdio.h>
#include <malloc.h>
struct Node
{
    int info;
    struct Node *next;
};
int BinarySearch(struct Node* low,struct Node* high,int info){
    struct Node*prev=getmid(low,high){
        struct Node *mid=prev->next;
    }
}
void show(struct Node *temp)
{
    while (temp != NULL)
    {       printf("%d\t", temp->info);
        temp = temp->next;
    }
}
void addBeg(struct Node **s, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = value;

    if (*s == NULL)
        newNode->next = NULL;
    else
        newNode->next = *s;

    *s = newNode;
}

void addLast(struct Node **s, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->next = NULL;

    struct Node *temp = *s;
    if (*s == NULL)
    {
        *s = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void addAfter(struct Node **s, int sinfo, int value)
{
    if (*s == NULL)
    {
        printf("List is Empty");
        return;
    }
    struct Node *temp = *s;
    while (temp != NULL)
    {
        if (temp->info == sinfo)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp == NULL)
    {

        printf("%d not found\n", sinfo);
    }
    else
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->info = value;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void delBeg(struct Node **s)
{
    if (*s == NULL)
    {
        printf("Empty List\n");
        return;
    }
    struct Node *temp = *s;
    *s = (*s)->next;
    free(temp);
    printf("Node deleted\n");
}

void delLast(struct Node **s)
{
    if (*s == NULL)
    {
        printf("List is emptyn");
        return;
    }
    if ((*s)->next == NULL)
    {
        *s = NULL;
        return;
    }
    struct Node *prev, *curr;
    curr = (*s)->next;
    prev = *s;
    while (curr->next != NULL)
    {
        curr = curr->next;
        prev = prev->next;
    }
    free(curr);
    prev->next = NULL;
}

void delInfo(struct Node **s, int info)
{
    struct Node *temp;
    if (*s == NULL)
    {
        printf("Empty List\n");
        return;
    }
    if ((*s)->info == info)
    {
        temp = *s;
        *s = (*s)->next;
        free(temp);
        printf("Node deleted\n");
        return;
    }
    struct Node *prev, *curr;
    prev = *s;
    curr = (*s)->next;
    while (curr != NULL)
    {
        if (curr->info == info)
        {
            break;
        }
        curr = curr->next;
        prev = prev->next;
    }
    if (curr == NULL)
    {
        printf("%d info not found\n", info);
    }
    else
    {
        prev->next = curr->next;
        free(curr);
        printf("Node deleted\n");
    }
}
