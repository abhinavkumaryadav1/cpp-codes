#include<iostream>

using namespace std;

int main()
{

int a[100];

int i,size,pos;

cout<<"enter the size of the array";

cin>>size;

cout<<"enter the elements of the array";

for(i=0;i<size;i++)
{
    cin>>a[i];
}
cout<<"the elements you entered in the array are:-"<<endl;


for(i=0;i<size;i++)

{
    cout<<a[i]<<" ";
}

cout<<endl<<"enter the position of the element you wish to delete in the array";

cin>>pos;

for(i=pos;i<size-1;i++)
{
    a[i]=a[i+1];
}

cout<<"the array after deletion"<<endl;

for(i=0;i<size-1;i++)
{
    cout<<a[i]<<" ";
}
    return 0;
}


