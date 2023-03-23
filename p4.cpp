#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
    int a;

    cin>>a;
    cout<<"the remainder of the given number is:"end;
    cout<<a%3;

    return 0;
}