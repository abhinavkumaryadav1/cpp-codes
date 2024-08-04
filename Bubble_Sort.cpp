#include<iostream>
using namespace std;

bool Bubble_Sort(int arr[],int size)
{
    int i=size;
    
    while (i>0)
    {
        bool check=false;
for (int j = 0; j<=i; j++)
{
   
if (arr[j+1]<arr[j])
{
    swap(arr[j],arr[j+1]);

    check=true;
}




}
if (check==false)
{
    break;
}

        --i;
    }
cout<<"the sorted array after applying bubble sort ";
 for (int i = 0; i < size; i++)
 {
    cout<<arr[i]<<" ";
 }
 
return true;
}

int main() 

{

int s;
cout<<"enter the size of the array"<<endl;
cin>>s;
int demo_Array[s];
cout<<"enter the elements of the array"<<endl;
for (int i = 0; i < s; i++)
{
    cin>>demo_Array[i];
}

Bubble_Sort(demo_Array,s);
return 0;
}