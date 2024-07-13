#include<stdio.h>
#include<conio.h>
int main()  
{
     #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
 

    int a[50],i,n,pos=0,neg=0;

    printf("enter the size of the array\n");
    
    scanf("%d",&n);

    printf("enter the values of the array\n");
   
    for(i=0;i<n;i++)

    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]<0)
                        neg++;
        else
                        pos++;

    }

    printf("there are %d positive elements in the given array",pos);
    printf("there are %d negative elemets in the given array",neg);

    getch();
    return 0;
}