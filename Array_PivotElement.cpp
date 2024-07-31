// Q) find pivot element or simply the smallest element but by binary search O(logn)

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




int main() 

{

int demo_array1[5]={5,1,2,3,4};
int demo_array2[5]={2,3,4,5,1};
int demo_array3[5]={4,5,1,2,3};

cout<<"the index of the pivot element in array1 is "<<PivotElement(demo_array1,5)<<endl;
cout<<"the index of the pivot element in array2 is "<<PivotElement(demo_array2,5)<<endl;
cout<<"the index of the pivot element in array3 is "<<PivotElement(demo_array3,5)<<endl;
return 0;
}