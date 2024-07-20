#include<iostream>
using namespace std;


ArrayReverse(int arr[],int size)
{

int temp;

for (int i = 0; i < size/2; i++)
{
    temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
}

for ( int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}

}


int main() 

{
int s;
cout<<"enter the size of the array"<<endl;
cin>>s;
int demo_array[s];
cout<<"enter the elements of the array"<<endl;
for (int i = 0; i < s; i++)
{
    cin>>demo_array[i];

}
cout<<"the reversed array is:- ";
ArrayReverse(demo_array,s);

return 0;
}