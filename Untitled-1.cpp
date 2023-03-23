#include<iostream>

using namespace std;

int main()
{

int arr[365],i,j;
 for(i=1;i<12;i++)
 {
    for(j=1;j<31;j++)
    {
        arr[j]=j;
    }
 }
 for(i=1;i<365;i++)
 {
    cout<<arr[i]<<endl;
 }
    return 0;
}


