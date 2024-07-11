/*
Print the following Pattern:-
input=4


                1
                21
                321
                4321
*/


#include<iostream>
using namespace std;

int main() 

{

int i,j=1,n=1;
cout<<"enter a number"<<endl;
cin>>i;

while (j<=i)
{
    
n=1;
while (n<=j)
{
    cout<<j-n+1;
    ++n;
}
cout<<endl;
++j;

}


return 0;
}