/*
MAKE THE FOLLOWING PATTTERN:-
input=5

          *
          **
          ***
          ****
          *****
*/

#include<iostream>
using namespace std;

int main() 

{

int i;
cout<<"enter the number for star pattern"<<endl;
cin>>i;
int j=1;

while (j<=i)
{
  int  n=1;
    while (n<=j)
    {
    cout<<"*";
    ++n;
    }
    cout<<endl;
    ++j;

    }


return 0;
}