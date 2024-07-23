#include<iostream>
using namespacec std;

func1(int arr[],int size)
{
int j=0,temp=0;

while(j<size){
    int count =0;
    int i=j+1;
    while(i<size){
        if(arr[i]==arr[j]){
swap(arr[i],arr[j+1]);
++j;
count=1;

        }
        else if(i==size-1 && arr[i]!=arr[j] && count=0){
            cout<<"the unique element is found "<<arr[i];
        }
        ++i;
    }
    ++j;
}


}


int main(){

int s;
cout<<"enter the size of the array"<<endl;
cin>>s;
int demo_array[s];

cout<<"enter the elements of the array"<<endl;
for (int i = 0; i < s; i++)
{
    cin>>demo_array[i];
}

func1(demo_array,s);
    return 0;
}







