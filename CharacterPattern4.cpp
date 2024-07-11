/*
PRINT THE FOLLOWING PATTERN:-
INPUT=5

        A
        BB
        CCC
        DDDD
        EEEEE

*/

#include<iostream>
using namespace std;

int main() 

{

int i;
cout<<"enter a number"<<endl;
cin>>i;
int j=1,n=1;

while (i>0)
{
    j=1;
    while (j<=n)
    {
        cout<<char(64+n);
        
        ++j;
    }
    cout<<endl;
    ++n;

--i;

}


return 0;
}