/*<VERY IMPORTANT> when you make array of n size and at run time you assign a value for n and hence size of the array
 it can crash it is a bad practice . the stack do not have a big memory if it if one assigns it on run time
  this is where we use "new " keyword and use dynamic memory alocation. */



#include<iostream>
using namespace std;

int sum(int *arr,int n) //refrence
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
    sum=sum+arr[i];
    }

    return sum;
    
}

int main() 

{
int n;
cin>>n;

int * arr= new int[n]; //DYNAMIC MEMORY ALLOCATIONS(good practice)

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

cout<<"sum is "<<sum(arr,n);



return 0;
}