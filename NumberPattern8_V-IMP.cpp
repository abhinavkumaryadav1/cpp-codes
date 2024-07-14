/*
PRINT THE PERFECT PIRAMID PATTERN OF NUMBER:-
INPUT=5

                         1
                        2 2
                       3 3 3
                      4 4 4 4
                     5 5 5 5 5
*/



#include<iostream>
using namespace std;

int main() 

{

int i,j=1,n;
cout<<"enter a number to print number pattern"<<endl;
cin>>i;

while (j<=i)
{

int space=i-j;
while (space>0)
{
    cout<<" ";
    --space;
}


    n=2*j-1;
    while (n>0)
    {
        if (n%2==0)
        {
            cout<<" " ;       
            }
            else
            {
                cout<<j;
            }
        --n;
    }
    cout<<endl;
    ++j;
}



return 0;
}