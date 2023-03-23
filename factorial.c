#include<stdio.h>
#include<conio.h>
int main()
{
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

     long int n,i=1,fact=1;
   scanf("%d",&n);
   while(i<=n)
   {
                  fact=fact*i;
                  i++;
   }
   printf("%d",fact);
   getch();
   return 0;
}