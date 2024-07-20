#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size, int target)
{
int i;
for ( i = 0; i < size; i++)
{
    if (arr[i]==target)
    {
    cout<<"The searched item is found and present at index:- ";
        cout<<i;
        i=-1;
        break;    
    }
    
}

if (i!=-1)
{
    cout<<"The searched item is not present in the array";
}


}



int main() 

{

int s,target;
cout<<"enter the size of the array"<<endl;
cin>>s;
int demo_array[s];
cout<<"ENTER THE ELEMENTS OF THE ARRAY"<<endl;
for (int i = 0; i < s; i++)
{
    cin>>demo_array[i];
}
cout<<"enter the target value you wish to search in the array"<<endl;
cin>>target;

LinearSearch(demo_array,s,target);

return 0;
}