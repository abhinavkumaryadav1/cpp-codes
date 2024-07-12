#include<iostream>
using namespace std;

int main() 

{
int arr[5]={1,2,3,4,5};
int target;
cout<<"enter target"<<endl;
cin>>target;
int i=0,j=1;

while (i<5)
{
    
    if (arr[i]==target)
    {
        cout<<i;
        break;
    }
    
  else if (i==4 && i!= target)
  {
    cout<<"target is not found in this array";
  break;
  }

  j=i+1;




while (j<=5)
{
    if (arr[i]+arr[j]==target)
    {
        cout<<"["<<i<<","<<j<<"]";
        i=4;
        break;
    }
    
    
    ++j;
}


++i;

}


return 0;
}