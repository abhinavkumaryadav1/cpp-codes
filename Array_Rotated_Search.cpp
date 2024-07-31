 // Q) search the element in rotated array using binary search.

#include<iostream>
using namespace std;

PivotElement(int arr[],int size)
{
    int start=0;
    int end= size-1;
    int mid= start +(end-start)/2;

    while(start<end)
    {
        
        if(arr[mid]>=arr[0])
       {
        start=mid+1;
       } 

        else{
        end=mid;
       }
        
        mid=start+(end-start)/2;
    }
    return start;
}

int BinarySearch(int arr[],int s,int e,  int key)
{
    int start = s;
    int end= e;
    int mid = start +(end-start)/2;
    while(start <= end)
    {
        if ( arr[mid] == key)
        {
            
            break;
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
    return mid;
}





int main() 

{

int demo_array[11]={4,5,6,7,8,9,10,11,1,2,3};


int pivot=PivotElement(demo_array,11);

if (6 >= demo_array[pivot] && 6<= demo_array[10])
{
    cout<<"the element is present at index "<<BinarySearch(demo_array,pivot,10,6)<<endl;
}

else if(6 >= demo_array[0] && 6<= demo_array[pivot-1])
{
    cout<<"the element is present at indexs "<<BinarySearch(demo_array,0,pivot-1,6)<<endl;
}



return 0;
}