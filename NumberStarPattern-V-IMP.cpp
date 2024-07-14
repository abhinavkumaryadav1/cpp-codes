/*
print the following pattern:-
input=5

    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1

*/







#include<iostream>
using namespace std;

int main() 

{

int i;
cout<<"enter a number to print number star pattern"<<endl;
cin>>i;
int j=1,n;

while (j<=i)
{
    n=1;
while (n<=i-j+1)
{
    cout<<n<<" ";
    ++n;
}

n=j;

while (n>0)
{
    if (n>1)
    {
    cout<<"* *"<<" ";
    }
--n;
}
n=i-j+1;
while (n>0)
{
    cout<<n<<" ";
    --n;
}
cout<<endl;
++j;


}



return 0;
}