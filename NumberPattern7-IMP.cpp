/*
PRINT THE FOLLOWING PATTERN
INPUT=5

1
    1
   121
  12321
 1234321
123454321

*/

#include<iostream>
using namespace std;

int main() 

{


int i;
cout<<"enetr a number to print he pattern"<<endl;
cin>>i;
int j=1,n=1;

while(j<=i)
{
    
int space=i-j;
while(space>0)
{

cout<<" ";
--space;


}

n=1;
while(n<=j){


cout<<n;
++n;
}



    n=j-1;
while(n>0)
{

cout<<n;
--n;


}









cout<<endl;

++j;
}











return 0;
}