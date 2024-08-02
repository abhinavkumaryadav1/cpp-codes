#include<iostream>
using namespace std;

int SelectionSort(int arr[],int size)
{
    
    for (int i = 0; i < size-1; i++)
    {
        int min=i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
                
            }
            swap(arr[min],arr[j]);
        }
        
    }
    cout<<"the array after sorting is ";
    for (int i = size-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
return 1;
}




int main() 

{
    int s;
    cout<<"enter the size of array "<<endl;
    cin>>s;
    int demo_array[s];
    cout<<"enter the elements of the array "<<endl;
    for (int i = 0; i < s; i++)
    {
        cin>>demo_array[i];
    }
    


SelectionSort(demo_array,s);


return 0;
}