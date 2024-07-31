#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,  int key)
{
    int start = 0;
    int end=4;
    int mid = start +(end-start)/2;
    while(start <= end)
    {
        if ( arr[mid] == key)
        {
            cout<< mid;
        }

        if(key < arr[mid])
        {
            end=mid-1;
        }

        else
        {
            start=mid+1;
        }
        
        mid = start +(end-start)/2;
    }
    return -1;
}






int main() 

{


int demo_array[5]={1,2,3,4,5};

cout<<"the index at which the key is present is ";
BinarySearch(demo_array,5,3);

return 0;
}