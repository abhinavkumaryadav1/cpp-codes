/*
MAKE THE FOLLOWING PATTTERN:-
input=4   input=5
1111      11111  
222       2222 
33        333  
4         44
          5

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
while (n<=i-j+1)
{
    cout<<j;
    ++n;
}
cout<<endl;

++j;

}

return 0;
}