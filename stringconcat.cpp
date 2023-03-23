#include<iostream>
using namespace std;

int main()
{
    
int i,temp,j;
int arr[7];
char strj[7];
string str;
cout<<"enter string"<<endl;
getline(cin,str);
for(i=0;i<7;i++)
{
arr[i]=str[int(i)];
}


for(j=0;j<4;j++)
{
for(i=0;i<7;i++)
{
if(arr[i]>arr[i+1])
{
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
   }
   }
}


/*for(i=0;i<7;i++)
{
    cout<<arr[i]<<endl;
}*/

for(i=0;i<7;i++)
{
strj[i]=arr[char(i)];
}

for(i=0;i<7;i++)
{
    cout<<strj[i];
}

    return 0;
}


