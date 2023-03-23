#include<stdio.h>
#include<conio.h>
int main()
{
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

   int i=0;

   

   do
   {
       i++;
       printf("%d",i);
       
   }
   while(i<10);
   getch();
   return 0;
}