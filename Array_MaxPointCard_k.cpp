#include<iostream>
using namespace std;
int main()
 { 

    int arr[9]={6,2,2,10,7,2,1,7,1};
    int l_sum=0;
    int r_sum=0;
    int max_sum=0;
    int n=9;
    int k=4;


//O(k)
    for (int i = 0; i <k; i++)
    {
        l_sum=l_sum+arr[i];
        max_sum=l_sum;
    }
    int rindex=n-1;
//O(k)

    for ( int j = k-1; j>=0; j--)
    {
        l_sum=l_sum-arr[j];
        r_sum=r_sum+arr[rindex];
        rindex--;

        max_sum=max(max_sum, l_sum+r_sum);
    }
    
cout<<max_sum;

return 0;
}