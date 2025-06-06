#include<iostream>
using namespace std;
int main()
 { 

    string arr="AABABBA";
    int k = 1;
    int l=0;
    int r=0;
    int hash_arr[26]={0};
    int max_freq = 0;
    int max_len = 0;
    int n = arr.size();
    while (r<n)
    {
        hash_arr[arr[r]-'A']++;
        max_freq=max(max_freq,hash_arr[arr[r]-'A']);
        if ((r-l+1) - max_freq > k)
        {
            hash_arr[arr[l]-'A']--;
            l++;
        }
        
        max_len=max(max_len,r-l+1);
        r++;
    }
    
    cout<< max_len;

return 0;
}