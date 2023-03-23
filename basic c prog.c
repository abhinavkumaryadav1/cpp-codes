#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],i,n,pos=0,neg=0;

    printf("enter the size of the array");
    
    scanf("%d",&n);

    printf("enter the values of the array");
   
    for(i=0;i<n;i++)

    scanf("%d",&i[i]);

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