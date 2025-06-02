#include<iostream>
using namespace std;


class human {

private:
int age;
int weight;
int hight


void getage()
{
    return this->age;

}

void setage(int x)
{
   this->age=x;
}

};


class male: public human{

public:

string color;


void sleep()
{
    cout<<"male is sleeping "<<endl;
}

};






int main() 

{



return 0;
}