#include<iostream>
using namespace std;
int main()
{

int year[365];
int i,j=0,n=0,k=1,item1;
char week[7]={'m','t','w','T','f','s','S'};
char yearweek[365],item2;
for(i=0;i<365;i++)
{
if(n<=6)ṇṇ
{
    yearweek[i]=week[n];
    
}
 
else{
    
    n=0;
    yearweek[i]='m';
}
n=n+1;
}
for(i=0;i<365;i++)
{
 cout<<yearweek[i]<<" ";

}
cout<<endl<<endl<<endl;



   for(i=0;i<12;i++)
{
    for(k=0;k<30;k++)
    {

     year[j]=k+1;
    
    j=j+1;
    }
     }
for(i=0;i<360;i++)
{
 cout<<year[i]<<" ";

}
cout<<"enter the date then day you wish to send message";
cin>>item1>>item2;
for(i=0;i<365;i++)
{
    if(year[i]==item1 && yearweek[i]==item2)
    {
        cout<<"happy birthday on date "<<year[i]<<" and day "<<yearweek[i]<<endl;
    }
}
return 0;
}