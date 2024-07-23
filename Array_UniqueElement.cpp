#include<iostream>
using namespace std;

ArrayUniqueElement(int arr[],int size){
int ans=0;
for (int i = 0; i < size; i++)
{
    ans=ans^arr[i]; //using XOR bitwize operator that gives a^a=0
   
}
cout<<"the unique element is "<< ans;
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

ArrayUniqueElement(demo_array,s);
return 0;
}