#include<iostream>
using namespace std;

int SwapAlt(int arr[],int size)
{

int temp=0;
for (int i = 1; i < size; i++)
{
    if (i%2!=0)
    {
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    else
    cout<<"";}
    for (int i = 0; i < size; i++)
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
for ( int i = 0; i < s; i++)
{
    cin>>demo_array[i];
}

cout<<"the array which swapped alternative elements is:- ";

SwapAlt(demo_array,s);

return 0;
}