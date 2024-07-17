//WAP to print the minimum value and the maximum value stored in the array.

#include<iostream>
using namespace std;


int Array_Min_Max(int arr[],int size)
{

int ArrayMax=arr[0],ArrayMin=arr[0];
//for MAX
for (int i = 1; i < size; i++)
{
    
if (arr[i]>ArrayMax)
{
    
    ArrayMax=arr[i];
    
}

}
//for MIN
for (int i = 1; i < size; i++)
{
    
if (arr[i]<ArrayMin)
{
    
    ArrayMin=arr[i];
    
}

}


cout<<"the max no of array is:-"<<endl;
cout<<ArrayMax<<endl;
 
cout<<"the min value of array is:-"<<endl;
cout<<ArrayMin;
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

Array_Min_Max(demo_array,s);

return 0;
}