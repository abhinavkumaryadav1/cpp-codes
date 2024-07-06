//this is the code for function call by refrence though you can call it through assigning forml parameters as pointers and then carry the dreess of the actul prameters.

#include<iostream>
using namespace std;

void swapReferenceVar(int &a, int &b){    //temp a b               point to be notes that this is just refrencing the actul parameters.
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

//note that we can also return a value from the function by making the funtion from a void funcction to an int type funtion and puting a refrence operator "&" before it
 
 int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}