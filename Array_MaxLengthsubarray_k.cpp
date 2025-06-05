#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
 { 

    
    int arr[12]={3,3,3,1,1,2,2,1,2,4,4,5};
    int n=12;
    int l=0;
    int r=0;
    int max_len=0;
    int k=2;
    map <int,int> m;

    while(r<n)
    {
        m[arr[r]]++;
    
        if (m.size()>k)
        {
            m[arr[l]]--;
            if (m[arr[l]]==0) m.erase(arr[l]);
            l++;  
        }
        
         if (m.size()<=k)  
         { max_len=max(max_len,r-l+1);
         }
        r++;        
    }
    
cout<<max_len;
    




return 0;
}