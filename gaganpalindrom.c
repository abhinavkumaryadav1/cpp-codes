#include<stdio.h>
#include<conio.h>
int main()
{
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif


   int a,r,s=0,l;
   
   printf("enter any number\n");
   scanf("%d",&a);
   l=a;
   while(a>0)
   {
       r=a%10;
    
       s=s+r;
       a=a/10;
   }
   
   if(l==s)
printf("armstrong");
else
printf("not armstrong");

   
   return 0;
}