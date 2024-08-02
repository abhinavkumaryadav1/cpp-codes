#include<iostream>
using namespace std;

int ispossible(int arr[],int size,int m , int mid)
{

int stud=1;
int pagesum=0;

for (int i = 0; i < size; i++)
{
    if (pagesum+arr[i]<=mid)
    {
        pagesum=pagesum+arr[i];
    }
    
    else
    {
         stud=stud+1;
        if (stud>m || arr[i]>mid )
        {
            return 0;
            
        }
        
        pagesum=arr[i];
    }
    
}
return 1;

}


int possiblesol(int arr[],int size,int m)
{
int start=0;
int sum=0;
int ans=0;
for (int i = 0; i < size; i++)
{
    sum=sum+arr[i];
}
int end=sum;
int mid=start+(end-start)/2;
while(start<=end)
{
if (ispossible(arr,size,m,mid)==1)
{
    ans=mid;
    end=mid-1;
}

else
{
    start=mid+1;
}

mid=start+(end-start)/2;
}
cout<< ans;
}









int main() 

{
    int s;
    cout<<"enter size"<<endl;
    cin>>s;
    int demo_array[s];
        cout<<"enter elements"<<endl;

    for (int i = 0; i < s; i++)
    {
        cin>>demo_array[i];

    }

    possiblesol(demo_array,s,2);
    



return 0;
}