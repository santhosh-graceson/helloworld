#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
  struct  Node* Next;  
}
struct Node* Top=NULL;  
void push(int x)
{
    struct Node* temp= (struct Node*)malloc(size of(struct Node));
    temp->data=x;
    temp->Next=Top;
    Top=temp;
}
void pop(int x)
{
 struct Node *temp;
 if(Top==NULL)
 return;
 temp=Top;
 Top=Top->Next;
 free(temp);
}
void print()
{
    int i;
    for (i=0;i<=Top;i++)
    printf("The stack:%d",i);
}
int main()
{
    push(3);
    print();
    push(1);
    print();
     push(1);
    print();
    pull();
    print();
}
