#include<iostream>
using namespace std;
class obj {
public:
string name ="abhinav";
int age = 22;

};

void objectfunction(obj ob1)
{
    cout<<ob1.name;
    cout<<endl<<ob1.age;
}


int main()
{
  obj ob1;
 objectfunction(ob1);



    return 0;
}