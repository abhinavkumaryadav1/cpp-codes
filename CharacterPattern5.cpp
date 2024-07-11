/*
Print the following Pattern:-
input=4


                A
                BC
                CDE
                DEFG
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
    cout<<char(64+count);
    ++count;
++col;
}
cout<<endl;
++row;

}


return 0;
}