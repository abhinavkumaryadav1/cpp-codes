#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *ptr)
{
    while(ptr!=NULL)
{
    printf("element data= %d \t", ptr->data);

ptr=ptr->next;
}


}

int main()
{

struct node *head;
struct node * first;
struct node *second;

 head=(struct node*)malloc(sizeof(struct node));
first=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));


head->data=0;
head->next=first;
first->data=1;
first->next=second;
second->data=2;
second->next=NULL;

traverse(head);
    return 0;
}