#include<iostream>
using namespace std;

bool IsSorted(int arr[],int size)
{
    if (size==0 || size==1)
    {
        return true;
    }
    
    if (arr[0]>arr[1])
     return false;
    else
    {
        IsSorted(arr+1 , size-1);
    }
    }

int main() 

{
int arr[5]={10,16,17,26,27};
int s=5;

if (IsSorted(arr,s))
{
    cout<<"array is sorted"<<endl;
}
else cout<<"array is not sorted"<<endl;

return 0;
}