/*41. First Missing Positive
Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

Example 1:

Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.
Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.
Example 3:

Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.
 
Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
    int n = nums.size();
    //Brute force O(N*N) Time Complexity
    // int maxi = 0;
    // for(int i=0;i<n;i++)
    // {
    //   maxi = max(maxi,nums[i]);
    // }

    // for(int i =1;i<maxi;i++)
    // {
    //   int temp =0;
    //   for(int j =0;j<n;j++)
    //   {
    //     if( nums[j] == i)
    //     {
    //       temp=i;
    //     }
    //   }
    //   if(temp != i) return i;
    // }

    // vector<bool> res(n+1,0); Better but with O(N) Space Complexity
    // for(int i=0;i<n;i++)
    // {
    //   if(nums[i]>0 && nums[i]<=n)
    //   {
    //       res[nums[i]] =1;
    //   }
    // }

    // for(int i=1;i<n+1;i++)
    // {
    //   if(res[i]==0) return i;
    // }

    //Optimal (making indexes the number we desire)

    bool contains1 =0;
    for(int i=0;i<n;i++)
    {
      if(nums[i]==1) contains1 =1;
      if(nums[i]<=0 || nums[i] > n) nums[i]=1;
    }

    if(contains1 ==0) return 1;

    for( int i=0;i<n;i++)
    {
      int num = abs(nums[i]);
      int idx = num-1;

      if(nums[idx]>0)
      {
        nums[idx]= -nums[idx];
      }

    }

    for(int i=0;i<n;i++)
    {
      if(nums[i]>0) return i+1;
    }
    
     return n+1;        

    }
};