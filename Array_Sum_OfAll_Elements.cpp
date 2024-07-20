#include<iostream>
using namespace std;


int Array_sum (int arr[], int size)
    {
        int sum=0;

        for (int i = 0; i <size; i++)
        {
            sum=sum+arr[i];

        }
        
   
    cout<<sum;     

    }
int main()
{
int s;
cout<<"enter the size of the array"<<endl;
cin>>s;
int demo_array[s];
cout<<"enter the elements of the array"<<endl;
for ( int i = 0; i < s; i++)
{
    cin>>demo_array[i];
}

cout<<"the sum of all elements of the array is:-  ";
     
    Array_sum(demo_array,s);

    return 0;

}