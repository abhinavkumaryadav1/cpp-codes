#include<iostream>
using namespace std;
string arr[10]= {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void SayDigit(int n)
{
    if (n==0)
    {
        return ;
    }



int ans=n%10;
n=n/10;
SayDigit(n);
cout<<arr[ans]<<" ";



    
}



int main() 

{

int i;
cin>>i;

SayDigit(i);


return 0;
}