/*
Print the following Pattern:-
input=4


                1
                23
                345
                4567
*/

#include<iostream>
using namespace std;

int main() 

{
int n;
cout<<"enter a number"<<endl;
cin>>n;
int col,row=1;
 
 while(row<=n)
 {

col=1;
int count=row;
while (col<=row)
{
    cout<<count;
    ++count;
++col;
}
cout<<endl;
++row;

}


return 0;
}