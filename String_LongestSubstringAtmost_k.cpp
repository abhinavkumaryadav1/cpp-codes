#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
 { 

    
    string arr="aaabbccdddddd";
    int n=13;
    int l=0;
    int r=0;
    int max_len=0;
    int k=2;
    map <char,int> m;

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