#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int s,int e,int key)
{
    if (s>e)
    {
        return false;
    }
      int mid=s+(e-s/2);
    if (arr[mid]==key)
    {
        return true;
    }

    else
    {
        if (arr[mid]<key)
        {
            BinarySearch(arr,mid+1,e,key);
        }
        
        else
        BinarySearch(arr,s,mid-1,key);
    }
    
    
}

int main() 

{
int arr[5]={10,16,17,26,27};
int key=16;

cout<<"key is present ? "<<BinarySearch(arr,0,4,key);

return 0;
}