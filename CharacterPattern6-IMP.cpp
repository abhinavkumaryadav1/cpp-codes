/*
print the following pattern
input=4
            D
            CD
            BCD
            ABCD
*/

#include<iostream>
using namespace std;

int main() 

{


int i;
cout<<"enter a number for the pattern"<<endl;
cin>>i;
int j=1,n=1;

while (j<=i)
{
    
    n=1;
    while (n<=j)
    {
        cout<<char(64+i+n-j);
    ++n;
    
    }
    cout<<endl;
    
    ++j;
    
    
    
    
}






return 0;
}