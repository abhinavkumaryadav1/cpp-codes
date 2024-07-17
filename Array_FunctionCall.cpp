//WAP to implement arrays with functions.

#include<iostream>
using namespace std;

void readarray(int arr[],int size)
{

    for(int i=0;i<size;i++){

        cout<<arr[i]<<" ";
    }
}

void writearray(int arr[],int size)
{

    for(int i=0;i<size;i++){

        cin>>arr[i];
    }
}

int main() 

{
int s;
cout<<"enetr the size of the array"<<endl;
cin>>s;
int demo_array[s];

cout<<"enter the elements of the array"<<endl;
writearray(demo_array, s);

cout<<"The array you inputed is:-"<<endl;
readarray(demo_array,s);


return 0;
}