#include<iostream>
using namespace std;

int SumOfArray(int arr[],int size)
{

if (size==0)
{
    return 0;
}
if (size==1)
{
    return arr[0];
}

int sum= arr[0] + SumOfArray(arr+1,size-1);

return sum;

}
int main() 

{
int arr[5]={1,2,3,4,5};
int s=5;

cout<<"THE SUM OF THE ARRAY ELEMENTS IS "<<SumOfArray(arr,s);


return 0;
}