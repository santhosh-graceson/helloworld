#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node
{
    int data;
    struct Node* next;
};

void printLinkedlist(struct Node* n)
{
while (n!=NULL)
printf("%d",n->data);
n=n->next;
}

int main()
{
    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));
    head->data=11;
    head->next=second;
    second->data=3;
    second->next=third;
    third=NULL;
    printLinkedlist(head);
}

