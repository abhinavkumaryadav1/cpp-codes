//Doubly Linked List code with updated method of node comparitively with singly list code.
#include<iostream>
using namespace std;

class Linkedlist_Doubly {

public :
int data;
Linkedlist_Doubly *next;
Linkedlist_Doubly *prev;

//constructor
Linkedlist_Doubly(int data)
{
    this -> data = data;
    this -> next = NULL;
    this->prev = NULL;
}   

//destructor

~Linkedlist_Doubly()
{
    int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;

}
};
//insertion at head function
void InsertAtHead(Linkedlist_Doubly* &Head, Linkedlist_Doubly* &Tail, int data)
{

if (Head==NULL)
{
    Linkedlist_Doubly* temp= new Linkedlist_Doubly(data);
    Head=temp;
    Tail=temp;
}

else{
    Linkedlist_Doubly* temp= new Linkedlist_Doubly(data);
temp->next=Head;
Head->prev=temp;
Head=temp;
}



}
//insertion at tail function
void InsertAtTail(Linkedlist_Doubly* &Head,Linkedlist_Doubly* &Tail,int data)
{
    if (Tail==NULL)
{
    Linkedlist_Doubly* temp= new Linkedlist_Doubly(data);
    Tail=temp;
    Head=temp;
}
else{
Linkedlist_Doubly* temp=new Linkedlist_Doubly(data);

Tail->next=temp;
temp->prev=Tail;
Tail=temp;
}

}
//insertion at any postion function
void InsertAtPosition(Linkedlist_Doubly* &Head,Linkedlist_Doubly* &Tail, int position ,int  data)
{
 
 if (position==1) // Because it requires a previous node to insert element at any position and since the 1st node doesnt have a prior node before it we simply call insertathead.
    {
        InsertAtHead(Head,Tail,data);
         return;    
    }
    
    int cnt=1;
Linkedlist_Doubly* temp=Head;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if (temp->next==NULL)
    {
        InsertAtTail(Head,Tail,data);
        return;
    }
    
    Linkedlist_Doubly* NodeToBeInserted = new Linkedlist_Doubly(data);
    
    NodeToBeInserted->next=temp->next;

    temp->next=NodeToBeInserted;

    temp->next->prev=NodeToBeInserted;
    
    NodeToBeInserted->prev=temp;

}
//deletion function
void delete_Node(Linkedlist_Doubly* &Head, int position)
{

if (position==1)
{
    Linkedlist_Doubly* temp= Head;
    temp->next->prev=NULL;
    Head=temp->next;
    temp->next=NULL;
    delete temp;
    
}

else
{
    Linkedlist_Doubly* curr=Head;
    Linkedlist_Doubly* prev=NULL;
    int cnt=1;

    while (cnt<position)
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}



}

//printing function
void print(Linkedlist_Doubly* &Head)
{
    Linkedlist_Doubly* temp=Head;

    while (temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
        cout<<" ";
    }
    
}

//to get the length of the list
int getlength(Linkedlist_Doubly* &Head)
{
   Linkedlist_Doubly* temp=Head;
int len=0;
    while (temp!=NULL)
    {
        
        temp=temp->next;

        len++;
    } 
    return len;
}

int main() 

{
/*We can create a node 1 and point it ny head and tail but  i have taken nullfor both head and
 tail and made the test acsess for which i will create head tail from scratch from functions*/
    
    Linkedlist_Doubly* Head=NULL;
    Linkedlist_Doubly* Tail=NULL;
//insert at head
    InsertAtHead(Head ,Tail, 12);
    InsertAtHead(Head ,Tail, 13);
    InsertAtHead(Head ,Tail, 14);
    InsertAtHead(Head ,Tail, 15);
//insert at tail
    InsertAtTail(Head,Tail,16);
//insert at any position
    InsertAtPosition(Head,Tail,3,100);
    InsertAtPosition(Head,Tail,1,101);
    InsertAtPosition(Head,Tail,8,102);
//deleting node from any position
    delete_Node(Head,1);

    cout<<"Printing Doubly Linked List ";
    print(Head);
    cout<<endl<<endl<<"the length of the doubly linked list is "<<getlength(Head)<<endl;;
    cout<<" Head At, "<<Head->data<<" Tail At "<<Tail->data;




return 0;
}