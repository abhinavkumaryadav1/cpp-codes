#include<iostream>

using namespace std;
void push();
void pop();
void show();
int stack[5];
int i,top=-1;
int choise;


int main()
{





while(choise !=4)
{
cout<<"enter 1 to perform push operation"<<endl<<"enter 2 to perform pop opertaion"<<endl<<"enter 3 to display the elements of the stack"<<endl<<"enter 4 to exit"<<endl;
cin>>choise;
switch(choise)
{
    case 1: push();
    break;
    case 2: pop();
    break;
    case 3: show();
    break;
    case 4:
    cout<<"exited";
    break;

    default: cout<<endl<<"wrong choise";
}}


    return 0;
}
void push()
{
    int x;
    if(top>=4)
    {cout<<"overflow"<<endl;}
    else{
        cout<<"enter the element you wish to insert to the stack";
        cin>>x;
        top=top+1;
        stack[top]=x;
        
        
    }
    

}
void pop()
{
if(top==-1)
{
    cout<<"underflow"<<endl;

}
else
{
    cout<<"the item has been deleted and the deleted itm is "<<endl<<stack[top];
    top=top-1;
}


}
void show()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
    }
    else{
cout<<"the stack elements are as folows"<<endl;
        for(i=top;i>=0;i--)
        {
            cout<<endl<<stack[i]<<endl;
        }
    }
}


