#include<iostream>
using namespace std;
int main()
{

int year[365];
int i,j=0,n=0,k=0;
char week[7]={'m','t','w','T','f','s','S'};
char yearweek[365];
for(i=0;i<365;i++)
{
if(j<=6)
{
    yearweek[i]=week[j];
}
else{
    j=0;
    yearweek[i]='m';
}
j=j+1;
}

for(i=0;i<365;i++)
{
 cout<<yearweek[i]<<" ";

}



return 0;
}