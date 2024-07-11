/*
MAKE THE FOLLOWING PATTTERN:-
input=4   

         ABCD
         ABCD
         ABCD
         ABCD


*/

#include<iostream>
using namespace std;

int main() 

{

int i,j=1;
cout<<"enter the no. of rows you want in the pattern \n";
cin>>i;
int n=1;

while(j<=i){

n=1;
while (n<=i)
{
    cout<<char(64+n);
    ++n;
}
cout<<endl;

++j;

}

return 0;
}