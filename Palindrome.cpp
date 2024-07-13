#include<iostream>
using namespace std;
int main()
{
    

    int p,n,r,temp=0;
    cout<<"enetr a number"<<endl;
    cin>>n;
p=n;
while(n>0)
{
r=n%10;

temp=temp*10+r;
n=n/10;
}
if(temp==p)
cout<<"the no is palindrom";
else 
cout<<"the no is not palindrom";

return 0; 

}
/* for solving this type of problems first  breakdown the problems  into its 
diffrent type of  logics and make psuedocode, then turn it into runiing code */