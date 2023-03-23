#include<stdio.h>
#include<conio.h>
int main()
{


   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

int num,i,flag=0,count=0,f,k;
printf("range");
scanf("%d %d",&num,&f);
for(i=num;i<f;i++)

{
for(k=2;k<f;k++)
{
    if(i%k==0)
    {
        flag=1;
        break;

    }
     
    if(flag==0)
    count++;
}
     
       
       printf("total= %d",count);


}

getch();
return 0;
}



