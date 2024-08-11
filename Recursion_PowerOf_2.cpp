#include<iostream>
using namespace std;
int pow2 (int n)
{
    if (n==0)
    {
        return 1;
    }
    
    return 2*pow2(n-1);
}



int main() 

{
int i;
cin>>i;
int ans =pow2(i);
cout<<ans;


return 0;
}