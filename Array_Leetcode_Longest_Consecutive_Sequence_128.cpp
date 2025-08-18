/*Longest Consecutive Sequence in an Array

Given an array nums of n integers.
Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.


Examples:
Input: nums = [100, 4, 200, 1, 3, 2]

Output: 4

Explanation:

The longest sequence of consecutive elements in the array is [1, 2, 3, 4], which has a length of 4. This sequence can be formed regardless of the initial order of the elements in the array.

Input: nums = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]

Output: 9

Explanation:

The longest sequence of consecutive elements in the array is [0, 1, 2, 3, 4, 5, 6, 7, 8], which has a length of 9. */


//better approch
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
        
//         sort(nums.begin(),nums.end());
//         int maxi=1;
//         int curr=1;
//         int n = nums.size();
        
//         if(n==1) return 1; 

//         for(int i =1; i<n;i++)
//         {
//             if(nums[i] -1 == nums[i-1]  )
//             {
                
//                 curr++;
                
//             }
//             else if(nums[i] == nums[i-1])
//             {
//                 continue;
//             }

//             else{
//                 curr=1;
//             }
//                 maxi = max(curr,maxi);
//         }

//         return maxi;
//     }
// };

// OPTIMAL APPROCH: if set takes O(1) then -> O(3N) finding start of sequesnce then iterating best case
//worst case if set takes more than O(N) then brute force is better approch than this


        unordered_set<int> s(nums.begin(),nums.end());
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        int longest =1;
        for(auto it : s)
        {
          if(s.find(it-1) == s.end())
          {
              int cnt =1;               //jo bhi element mile agar usse just kam wala nahi hai to wo starting point hai to set me dhund lo unke age se sequences jabtak break na ho cnt++ aur store longest do this for all set elements simple.
              int x=it;

              while(s.find(x+1) != s.end())
              {
                x++;
                cnt++; 
              }
              longest = max(longest , cnt);
          }
          
        }

      return longest;