/*
283. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i=0;
        int j=1;

        while(j<nums.size())
        {
            if(nums[i]!=0) i++;
            if(nums[i] == 0 && nums[j]!=0)
            {
              swap(nums[i],nums[j]);
              
              i++;
            }

          j++;
        }

    }
};