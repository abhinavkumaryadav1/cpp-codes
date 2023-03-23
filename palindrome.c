#include<stdio.h>
#include<conio.h>
int main()
{
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

    int p,n,r,temp=0;
    scanf("%d",&n);
p=n;
while(n>0)
{
r=n%10;

temp=temp*10+r;
n=n/10;
}
if(temp==p)
printf("the no is palindrom");
else 
printf("the no is not palindrom");

getch(); 

}
/* for solving this type of problems first  breakdown the problems  into its 
diffrent type of  logics and make psuedocode, then turn it into runiing code */