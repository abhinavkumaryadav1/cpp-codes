/*Given a binary array nums and an integer k, flip at most k 0's.
Return the maximum number of consecutive 1's after performing the flipping operation.
Examples:
Input : nums = [1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0] , k = 3
Output : 10 */

#include<iostream>
using namespace std;
int main()
 { 

    int arr[19]={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int n=19;
    int l=0;
    int r=0;
    int max_len=0;
    int curr_len=0;
    int k=3;
    int zero_count=0;

//my solution i tried but a bug false answer

//     while (r<n)
//     {
// int zero_count=0;

//     for (int i = l; i<n; i++)
//     {
//         if (arr[i]==1)
//         {
//             curr_len=i-l+1;
//             continue;
            
//         }
        
        
//         if (arr[i]==0)
//         {
//             if (zero_count<=k)
//             {
//                 curr_len=i-l+1;
//                 zero_count++;

//             }
            
//         }
//         if (zero_count>k)
//             {
//                 l++;
//                 break;
//             }
        
        
//     cout<<curr_len<<" ";    
//     }
//     cout<<curr_len<<"_";
//     max_len=max(max_len,curr_len);
//     cout<<max_len<<endl;
//     // curr_len=0;
//         r++;
//     }



//optimal solution
while (r<n)
{
    if (arr[r]==0)
    zero_count++;
    
    while (zero_count>k)
    {
        if (arr[l]==0)
        
            zero_count--;
            l++;
        
        
    }
    max_len=max(max_len,r-l+1);
   r++;
}


    cout<<max_len;

return 0;
}