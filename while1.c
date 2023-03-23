#include<stdio.h>
#include<conio.h>
int main()
{
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

   int i=2;

   while(i<=20)
{
    printf("%d",i);
    i=i+2;
}
getch();
}
   