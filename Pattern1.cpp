/*
MAKE THE FOLLOWING PATTTERN:-
input=4   input=5
1111      11111  
2222      22222 
3333      33333  
4444      44444
          55555

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
    cout<<j;
    ++n;
}
cout<<endl;

++j;

}

return 0;
}