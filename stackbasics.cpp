ṇ#include<iostream>

#define size 4
using namespace std;

int top=-1,imp_array[size];
void push();
void pop();
void show();
ṇ
int main()
{
int choice;

while (0) {

    cout<<endl<<"operations performed by stack";
    cout<<endl<<"1:push the element into the stack"<<endl<<"2:pop the element from the stack"<<endl<<"3: show the elements of the stack"<<endl<<endl<<"enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: show();
        break;
        
        deafult: cout<<endl<<"invalid choice";
    }}


    return 0;
}


void push()
{

int x;
if(top==size-1)
{
    cout<<endl<<"stack overflow";
}
else
{
cout<<endl<<"enter the element your want to insert into the stack";
for(int i=0;i<size;i++)
{
cin>>x;
if(i<size)
{
top=top+1; }
imp_array[top]==x;
}}



}

void pop()
{

if(top==-1)
{
    cout<<endl<<"stack underflow";

}
else
{
    cout<<endl<<"the poped element is"<<imp_array[top];
top=top-1;
}

}
void show()
{
    if(top==-1)
    {
        cout<<endl<<"stack underflow";

    }
    else
    {
        cout<<endl<<"the element present in the stack are:-"<<endl;
        for(int i=top;i>=0;--i)
    { cout<<endl<<imp_array[i]; }   
    }

}



