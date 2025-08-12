/*53. Maximum Subarray

Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

      //KADANE'S ALGORITHM

        int maxsum=INT_MIN;
        int currsum=0;
        int low=0; //for printing the max subarray
        int high =0; //for printing the max subarray
        
           for(int i=0; i<nums.size();i++)
           {
           
            currsum=currsum+nums[i];
            maxsum= max(currsum,maxsum);
            if(currsum == maxsum) high=i; //for printing the max subarray

            if(currsum<0)
            {
                currsum=0;
                low=i+1;//for printing the max subarray
            }
           }

            for(int i=low;i<=high;i++)//for printing the max subarray
            {
              cout<<nums[i]<<" ";
            }

           return maxsum;

    }
};