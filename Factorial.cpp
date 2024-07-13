#include<iostream>
using namespace std;
int main()
{



    int num,i=1,fact=1;
    cout<<"enter the no.";
    cin>>num;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    cout<<"the factorial of the number is:-\n";
    cout<<fact;

    return 0;
    
}