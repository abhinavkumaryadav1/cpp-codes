#include<iostream>
using namespace std;
void sum(int, int);
float sum(float, float);

int main()
{
    int x,y,z;
    float i=2.2 , j=5.5   ;
    float k;
    x=10;
    y=20;
    sum(x,y);
    k=sum(i,j);

    cout<<"the sum is:-"<<k<<endl;
    return 0;

}
void sum(int x,int y)
{
    int s;
    s=x+y;
    cout<<"the sum is:-"<<s<<endl;

}

float sum(float i, float j)
{
    float k;
    k=i+j;
    return k;
    
}