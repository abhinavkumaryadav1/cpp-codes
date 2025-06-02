#include<iostream>
#include<string.h>
using namespace std;


class abhi{
public:
int data;
char* name;


abhi()
{
    cout<<"deafult is working"<<endl;
    name= new char[100];
}
abhi(abhi &temp)
{
    char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->data = temp.data;
        
}
void print()
{
    cout<<this->data<<endl;
    cout<<this->name;
    
}
void setdata(int da)
    {
        data=da;
    }

 void setname(char name[])
    {
        this->name=name;
    }
};


int main()
{
    abhi a1;

    a1.setdata(10);
    char ch[20]="abhinav";
    a1.setname(ch);
abhi a2(a1);

    a1.print();
    cout<<endl;
    a2.print();

    a1.name[1]='h';
    
    a1.print();
    a2.print();

    

    


    return 0;
}