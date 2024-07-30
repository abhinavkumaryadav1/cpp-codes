// Q) First and Last Position of an Element In Sorted Array.
#include<iostream>
using namespace std;

First_position(int arr[],int size,int key)
{
    int ans=0;
    int start=0 , end=size-1;
    int mid = start + (end-start)/2;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            
            end=mid-1;
            ans=mid;
        }

        else if(arr[mid] < key)
        {
            start=mid+1;
        }

        else{
            end=mid-1;
        }
        
        mid= start + (end-start)/2;
    }
    return ans;

}
Last_position(int arr[],int size,int key)
{
    int ans=0;
    int start=0 , end=size-1;
    int mid = start + (end-start)/2;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            start=mid+1;
            
            ans=mid;
        }

        else if(arr[mid] < key)
        {
            start=mid+1;
        }

        else{
            end=mid-1;
        }
        
        mid= start + (end-start)/2;
    }
    return ans;

}
int main() 

{

int odd[7]={1,2,2,2,2,3,3};
// pair<int,int> p;                  (another feature)
// p.first=First_position(odd,7,2);  
// p.second=First_position(odd,7,2);
cout<<"the first occurence of 2 is "<<First_position(odd,7,2)<<endl;
cout<<"the last occurence of 2 is "<<Last_position(odd,7,2);

return 0;

}