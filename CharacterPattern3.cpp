/*
PRINT THE FOLLOWINF PATTERN:-

INPUT=4

            ABCD
            EFGH
            IJKL
            MNOP



*/

#include<iostream>
using namespace std;

int main() 

{

int i;
cout<<"enter a number"<<endl;
cin>>i;
int j=1,n=1;

while (j<=i)
{
    
while (n<=i*i)
{
    if (n<=i*j)
    {
        cout<<char(64+n);
    
    }
    
    else
    break;
    
        ++n;
}

cout<<endl;
++j;


}


return 0;
}