#include<iostream>
using namespace std;

class Linkedlist {

public :
int data;
Linkedlist *next;



//constructor
Linkedlist(int data)
{
    this -> data = data;
    this -> next = NULL;
}   

//destructor

~Linkedlist()
{
    int value = this->data;
    if (this->next!= NULL)
    {
        delete next;
        this->next=NULL;
    }
    cout<<endl<<"freed a memory"<<endl;;
}


};

void InsertAtHead(Linkedlist* &Head , int d)
{
    Linkedlist * temp = new Linkedlist(d);

    temp ->next =Head;
    Head=temp;
}

void InsertAtTail(Linkedlist* &Tail , int d)
{
    Linkedlist * temp = new Linkedlist(d);

    Tail ->next=temp;
    temp ->next=NULL;
    Tail=temp;
    
}

void InsertAtPosition(Linkedlist* &Head,Linkedlist* &Tail ,int position,int d)
{
    if (position==1) // Because it requires a previous node to insert element at any position and since the 1st node doesnt have a prior node before it we simply call insertathead.
    {
        InsertAtHead(Head,d);
         return;    
    }
    
    int cnt=1;
Linkedlist* temp=Head;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if (temp->next==NULL)
    {
        InsertAtTail(Tail,d);
        return;
    }
    
    Linkedlist* NodeToBeInserted = new Linkedlist(d);
    
    NodeToBeInserted->next=temp->next;
    temp->next=NodeToBeInserted;

}

void deletenode(Linkedlist* &Head,Linkedlist* Tail, int position)
{

//deleting first node
if (position==1)
{
    Linkedlist*temp=Head;
    Head=Head->next;
    temp->next=NULL;
    delete temp;
    
}

//deleting any middle or last node
else
{
    Linkedlist* prev=NULL;
    Linkedlist* curr=Head;
    int cnt=1;
    while (cnt < position)
    {
      prev=curr;
      curr=curr->next;
      cnt++;
      
    }
    prev->next=curr->next;
      curr->next=NULL;
      delete curr;  
       prev=prev->next;
    //   if (prev->next==NULL)        i am tying to update tail position when i delete the last element of the linkedlist.
    //   {
    //     Tail=prev;
    //       prev->next=NULL;
    //       delete prev;
    //   }
      
}


}

void print(Linkedlist* &Head)
{
    Linkedlist* temp=Head;
    while (temp!=NULL)
    {
        cout<<temp ->data;
        cout<<" ";
        temp=temp ->next;
        
    }
    
}


int main() 

{

Linkedlist * node1 = new Linkedlist(10);
 
Linkedlist* Head=node1;
Linkedlist* Tail=node1;

//Inserting elements at Head
InsertAtHead(Head,8);
InsertAtHead(Head,6);
InsertAtHead(Head,4);
InsertAtHead(Head,2);
InsertAtHead(Head,0);

//Inserting element at Tail
// InsertAtTail(Tail,8);
// InsertAtTail(Tail,6);
// InsertAtTail(Tail,4);
// InsertAtTail(Tail,2);
// InsertAtTail(Tail,0);

//Inserting element at any specefic position
// InsertAtPosition(Head,Tail,5,7);

//printing linkedlist
print(Head);

//deleting any element
//  deletenode(Head,Tail,6);
// // print(Head);
// cout<<"Head->"<<Head->data<<" ";
// cout<<"Tail->"<<Tail->data;
// print(Head);
return 0;
}