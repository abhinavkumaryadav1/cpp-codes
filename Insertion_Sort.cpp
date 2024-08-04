#include<iostream>
using namespace std;

bool Insertion_Sort(int arr[],int size)
{

for (int i = 1; i < size; i++)
{
    int temp=arr[i];
    int j=i-1;
    for ( j = i-1; j>=0 ; --j)
    {
        if (arr[j]>temp)
        {
            arr[j+1]=arr[j];
        }
        
        else
        {
            break;
        }
    }
    arr[j+1]=temp;
    
}


//printing
for (int i = 0; i <size; i++)
{
    cout<<arr[i]<<" ";
}


}




int main() 

{
int s;
cin>>s;
int demo_array[s];
for (int i = 0; i < s; i++)
{
    cin>>demo_array[i];
}

Insertion_Sort(demo_array,s);


return 0;
}