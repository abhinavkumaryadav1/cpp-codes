#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int> &arr,int k)
{
    int l=0;
    int r=0;
    int cnt=0;
    int n=arr.size();
    map <int,int> hash_arr;
    while (r<n)
    {
        hash_arr[arr[r]]++;
        
        while (hash_arr.size()>k)
        {
            hash_arr[arr[l]]--;
            if (hash_arr[arr[l]]==0)
            {
                hash_arr.erase(arr[l]);
            }
            
            l++;
        }
        
        cnt=cnt+(r-l+1);
        r++;
    }
    int klessthanone(vector<int> &arr, int k);
    int klessone= klessthanone(arr,k-1);
    return (cnt-klessone);
}

int klessthanone(vector<int> &arr,int k)
{ 
   int l=0;
    int r=0;
    int cnt=0;
    int n=arr.size();
    map <int,int> hash_arr;
    while (r<n)
    {
       hash_arr[arr[r]]++;
        
        while (hash_arr.size()>k)
        {
            hash_arr[arr[l]]--;
            if (hash_arr[arr[l]]==0)
            {
                hash_arr.erase(arr[l]);
            }
            
            l++;
        }
        
        cnt=cnt+(r-l+1);
        r++;
    }
    return cnt; 
}

int main()
 { 

    vector<int> arr={1,2,1,2,3};
    int k=2;
    
    cout<<"result:- "<<maxSubArray(arr,k);

return 0;
}