/*
print the following pattern
input=4
            ****
             ***
              **
               *
*/

#include<iostream>
using namespace std;

int main() 

{
int i;
cout<<"enter a number to print star pattern"<<endl;
cin>>i;
int j=1;
int n=i;
while (i>0)
{
  int space=n-i;
    while (space>0){

     cout<<" ";
     --space; 
     }


   j=1;
    while (j<=i)
    {
        cout<<"*";
        ++j;
    }
    cout<<endl;
    --i;
}

return 0;
}