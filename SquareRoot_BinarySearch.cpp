#include<iostream>
using namespace std;

long long int SquareRoot(int n)
{
    int start=0, end=n;
    long long int mid=start+(end-start)/2;
    long long int ans=0;
    while(start<=end)
    {
         long long int square=mid*mid;
        if (square==n)
        
            cout<< mid;
        
         if(square < n )
        {
            ans=mid;
            start=mid+1;
        }
        else {
        
            end=mid-1;
        }
        

        
        mid=start+(end-start)/2;
    }
    return ans;
}

double Precesion(int n,int prec,int sigpart)
{
    double ans=sigpart;
    double factor=1;

    for (int i = 0; i < prec; i++)
    {
        factor=factor/10;
        for (double j = ans; j*j<n; j=j+factor)
        {
            ans=j;
        }
        
    }
    return ans;
}



int main() 

{

int s;
cout<<"enter square\n";
cin>>s;

 int sigpart=SquareRoot(s);
cout<<"the precise square root is "<<Precesion(s,4,sigpart);

return 0;

}