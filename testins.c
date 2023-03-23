#include<stdio.h>
#include<stdlib.h>

 struct node
 {

int data;

struct node *next;  //self refrencing structure(as we create variable of structure type)

};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("element data = %d \t", ptr->data);

        ptr=ptr->next; 
    }
  printf("\n'");  
}

struct node * insert(struct node *head,int data)
{

    struct node *ptr=(struct node*)malloc(sizeof(struct node));

    ptr->next=head;
    ptr->data =data;

    return ptr;
}

int main()
{

//here creating nodes for the linked list

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

//here requesting memmory from heap for the node (dynamic memory allocation)

    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

//here linking the nodes to each other and pointing the next pointer to the next node

//head->first node

head->data=0;
head->next=first;

//first->second node

first->data=1;
first->next=second;

//second->third node

second->data=2;
second->next=third;

//third->fourth node

third->data=3;
third->next=fourth;

//fourth->null

fourth->data=4;
fourth->next=NULL;

linkedlisttraversal(head); //function for traversing of linked list and argument as head as it it first element to start traversing with.
 head= insert(head,26);
 linkedlisttraversal(head);
    return 0;
}
