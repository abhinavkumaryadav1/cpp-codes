#include<iostream>
using namespace std;
int main()
 { 

    string arr="bbacba";
    int l=0;
    int r=0;
    int count_sub=0;
    int n=arr.size();
    int last_seen[3]={-1,-1,-1};
    while(r<n){

        last_seen[arr[r]-'a']=r;

        if(last_seen[0]!=-1 && last_seen[1]!=-1 && last_seen[2]!=-1)
        {
         count_sub += 1 + min(last_seen[0], min(last_seen[1], last_seen[2]));
        }
    r++;
    }
    cout<<count_sub;

return 0;
}