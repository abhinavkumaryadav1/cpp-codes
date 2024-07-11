/*
print the following star pattern:-
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
int j;


while(i>0){
int n=1;
j=i;
while (n<=j)
{
    cout<<"*";
++n;
}

cout<<endl;
++j;

--i;
}


return 0;
}