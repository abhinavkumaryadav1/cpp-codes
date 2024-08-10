#include<iostream>
using namespace std;

int main() 

{

int i=5;
int * ptr1=&i;
int ** ptr2=&ptr1;

cout<<" value in i "<<i<<endl;
cout<<"address of i "<<&i<<endl;
cout<<"value in ptr1 "<<ptr1<<endl;
cout<<"value corresponding to address stored in ptr1 "<<*ptr1<<endl;
cout<<"address of ptr1 "<<&ptr1<<endl;
cout<<" value is ptr2 "<<ptr2<<endl;
cout<<" value corresponding to address in ptr2 "<<*ptr2<<endl;
cout<<"the value corresponding to the address that is a value to a diffrent correspoding address that is stored in ptr2 "<<**ptr2<<endl;
f
return 0;
}