#include<stdio.h>
#include<conio.h>
int main()
{
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

   int n,i=1,p;
   scanf("%d",&n);
   while(i<=10)
   {
       p=i*n;
       printf("%d * %d = %d \n",n,i,p);
       i++;
   }  
   getch();
   }