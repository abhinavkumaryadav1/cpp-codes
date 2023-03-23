#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

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

    getch();
    
}