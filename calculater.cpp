#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()

{
 #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif


    
    int a,b,c;
cout<<"enter nos";
   cin>>c>>a>>b;

    
    if(c=='*')

    cout<<a*b;

    else if(c=='/')

    cout<<a/b;

    else if(c=='-')

    cout<<a-b;

    else if(c=='+')
    cout<<a+b;

    
else
    return 0;
}

