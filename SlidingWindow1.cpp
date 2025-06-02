#include<iostream>
using namespace std;

int main() 

{

int arr[8]={8,7,6,5,4,9,9,9};
int k=3;
int max=0;
int temp =0;

for (int i = 0; i < 6; i++)
{
    temp=0;
    for (int j = i; j<=i+2; j++)
    {
       temp=temp+arr[j];
    }
    
    if (temp>max)
    {
        max=temp;
    }
    

}

cout<<"max is : "<<max;


return 0;
}