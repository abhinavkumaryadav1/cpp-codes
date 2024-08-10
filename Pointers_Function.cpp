#include<iostream>
using namespace std;

void pointer(int *p)
{
    cout<<p;
    
    
    }


    void update(int *p)

{
    //p=p+1; //this will not work as it stores the adrees in a new pinter which is initialised in this function only.
    *p = *p+1; //this will work as it is refrencing to the corresponding adress and will change the value present at that perticular address.
      
}

int main() 

{

int i=5;
int *j=&i;

cout<<"adress of i "<<endl;
pointer(j);
cout<<endl;
cout<<"before updation of value at i "<<*j<<endl;
update(j);
cout<<"after updation of value at i "<<*j;






return 0;
}