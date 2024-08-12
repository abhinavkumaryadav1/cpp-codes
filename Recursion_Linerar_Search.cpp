#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size,int key)
{
    if (size==0)
    {
        cout<<"key not found";
        return 0;
    }
    if (arr[0] == key)
    {
        cout<<"key found  ";
        return 1;
    }

    else
    {
        LinearSearch(arr+1,size-1,key);
    }
    
}

int main() 

{
int arr[5]={10,16,17,26,27};
int s=5;
int key=26;

LinearSearch(arr,s,key);



return 0;
}