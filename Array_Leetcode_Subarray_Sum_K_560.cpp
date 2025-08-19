/*560. Subarray Sum Equals K

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 

Constraints:

1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      //only works for positive element so we cant use this it will fail for negative numbers
    //  int i =0;
    //  int j=0;
    //  int n = nums.size();
    //  int curr =0;
    //  int cnt=0;

    //  if(n==1)
    //  {
    //   if(k==nums[0])
    //   {
    //     return 1;
    //   }
    //   else return 0;
    //  }

    //  while(i<n && j<n)
    //  {
      
    //   curr += nums[i];
      
    //   if(curr==k)
    //   {
    //     cnt++;
    //   }
    //   while(curr>k)
    //   {
    //     curr -= nums[j];
    //     j++;
    //     if(curr==k)
    //   {
    //     cnt++;
    //   }
    //   }


    //   i++;
    //  }

    //   return cnt;

    //optimal approch prefix sum approch very important

    unordered_map<int,int> m;
    m[0] = 1;

    int cnt =0;
    int sum =0;
    int n= nums.size();

    for(int i =0 ; i<n;i++)
    {
      sum += nums[i];

      if(m.find(sum-k) != m.end())
      {
        cnt += m[sum-k];
      }

      m[sum]++; //prefix sum store kara reh hai map me thoda sa alag hai k-sum wale se
    }
        return cnt;
    }
};