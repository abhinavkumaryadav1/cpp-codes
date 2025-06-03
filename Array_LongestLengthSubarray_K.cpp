#include<iostream>
using namespace std;
int main()
 { 

    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int k=13;
    int l=0;
    int r=0;
    int n=10;
    int longabhi =0;
    int sum=0;
    
  while (r<n)
  {
    sum=0;
    int z=l;
    while( z<=r){
    sum=sum+arr[z];
    z++;
  }
  cout<<l<<" "<<r<<" "<<sum<<endl;
  // if(r==0 && sum>k)
    // {
    //     l++;
    //     r++;
    // }
    if (sum<=k)
    {
        longabhi=max(longabhi, (r-l+1));
        r++;
    }
    
    else{
    l++;
    }

  }
  
cout<<longabhi;

return 0;
}