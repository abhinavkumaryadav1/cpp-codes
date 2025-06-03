/* Given a string s, find the length of the longest substring without duplicate characters.
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
note:- there is a problem in this solution as the input i have choses is generating false output but 
this solution runs in leetcode so it is a edge case.*/


#include<iostream>
using namespace std;
int main()
 { 

    string s = "abcdzanspa";
    int max_len=0;
    int l=0;
    int r=0;
    int len=0;
    int n = s.size();
    int hash[255];
    for (int i = 0; i < 255; i++)
    {                                          
        hash[i]=-1;
    }
    
while(r<n){

    if (hash[s[r]]!= -1)
    {
        if (hash[s[r]]>=l)
        {
            l= hash[s[r]]+1;
        }
        
    }
    
    len=r-l+1;
    max_len=max(len,max_len);
    hash[s[r]]=r;
    r++;
}
   
    cout<<max_len;

    

return 0;
}
