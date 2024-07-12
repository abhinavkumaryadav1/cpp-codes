#include<iostream>
using namespace std;
int main()
{
int m,n;
cout<<"enter the sizes of array num1 and num2;"<<endl;
cin>>m>>n;
int c=m+n;
float num1[m];
float num2[n];
float merge[m+n];
int i=0,j=0,k=0;
cout<<"enetr the elements of num1 array in ascending order"<<endl;
while(i<m)
{
    cin>>num1[i];
    ++i;
}
cout<<"enetr the element of the second array in ascending order"<<endl;
while(j<n)
{

    cin>>num2[j];
    ++j;
}


for(i=0,j=0,k=0;i<m&&i<n;k++)
{
if (num1[i]==num2[j])
{
    merge[k]=num1[i];
    merge[k+1]=num2[j];
    ++k;
    ++i;
    ++j;
}

else if(num1[i]<num2[j])
{
    merge[k]=num1[i];
    ++i;
}

else 
{
    merge[k]=num2[j];
    ++j;
}

}

while(i<m)
{
    merge[k]=num1[i];
    ++i;
    ++k;
}
while(j<n)
{
    merge[k]=num2[j];
    ++k;
    ++j;
}

if(c%2==0)
{

c=c/2;

cout<<"value of median "<<(merge[c]+merge[c-1])/2.0;
}

else
{
    
     c=c/2;

    cout<<"value of median  "<<merge[c];
}

    return 0;
}