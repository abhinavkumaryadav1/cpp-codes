#include<iostream>
using namespace std;



MountainPeak(int arr[],int size)
{
    int start=0;
    int end = size-1;
    int mid= start +(end-start)/2;
    
    while (start<end)
    {
        if (arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }

        else 
        {
            end=mid;
        }
        mid=start +(end-start)/2;
        
    }
    return start;
}





int main() 
{

int demo_arr[5]={6,8,10,7,5};

cout<<"the index of peak element of the array is "<< MountainPeak(demo_arr,5);


return 0;
}