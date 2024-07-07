#include<iostream>
using namespace std;
int a=0,b=1;
int seriesf(int p)
{
if(p<2){
   return 1;

}
int c;
c=a+b;
a=b;
b=c;
cout<<c<<" ";
seriesf(p-1);

   

}



int main() 

{
int p;
cout<<"enter the number of index of series \n";
cin>>p;
cout<<"the fibanaci series is"<<" "<<""<<a<<" "<<b<<" ";
seriesf(p);

return 0;
}