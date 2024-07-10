/*
MAKE THE FOLLOWING PATTTERN:-
input=4   input=5
1234      12345  
1234      12345 
1234      12345  
1234      12345
          12345

*/

#include<iostream>
using namespace std;

int main() 

{

int i,j=1;
cout<<"enter the no. of rows you want in the pattern \n";
cin>>i;


while(j<=i){

int n=1;
while (n<=i)
{
    cout<<n;
    
    ++n;
}
cout<<endl;

++j;

}

return 0;
}