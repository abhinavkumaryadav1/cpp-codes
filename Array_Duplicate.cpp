#include<iostream>
using namespace std;

int ArrayDuplicate(int arr[],int size)
{

for (int i = 0; i < size; i++)
{
    for (int j = i+1; j < size; j++)
    {
        if (arr[i]==arr[j])
        {
            cout<<"the duplicate is "<<arr[i];
            break;
        }
        
    }
    
}


}


int main() 

{
int s;
cout<<"enter the size of the array"<<endl;
cin>>s;
int demo_array[s];

cout<<"enter the elements of the array"<<endl;
for (int i = 0; i < s; i++)
{
    cin>>demo_array[i];
}

ArrayDuplicate(demo_array,s);


return 0;
}