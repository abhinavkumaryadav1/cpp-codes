/*
MAKE THE FOLLOWING PATTTERN:-
input=4        input=5
1  2  3  4     1  2  3  4  5  
5  6  7  8     6  7  8  9  10 
9  10 11 12    11 12 13 14 15     
13 14 15 16    16 17 18 19 20   
               21 22 23 24 25           

*/

#include<iostream>
using namespace std;

int main() 

{

int i;
cout<<"enter the no. of rows you want in the pattern \n";
cin>>i;
int j=1;
int n=1;

while(j<=i){

//int n=1;
while (n<=i*i)
{
    if (n<=i*j)
    {
        cout<<n<<" ";
    
    ++n;
    }
    else
    break;
    
}
cout<<endl;

++j;

}

return 0;
}