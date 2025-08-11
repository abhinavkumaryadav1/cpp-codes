/*
169. Majority Element

premium lock icon
Companies
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // brute force failed in Time limit TLE
        // for (int i = 0; i < nums.size(); i++) {

        //     int curr = 0;

        //     for (int j = 0; j < nums.size(); j++) {

        //         if (nums[j] == nums[i]) {
        //             curr++;
        //         }
        //     }
        //     if (curr > (nums.size() / 2)) {
        //         cout << nums[i];
        //         return nums[i];
        //     }
        // }


        //better approch:

        // map<int,int> freq;

        // for(int i =0;i<nums.size();i++)
        // {
        //   freq[nums[i]]++;
        // }

        // for(auto it : freq)
        // {
        //   if(it.second > nums.size()/2)
        //   return it.first;
        // }

        //Optimal approch (Moore's Voting Algorithm) I INVENTED THIS ALGO ON MY OWN.

        int ele;
        int cnt=0;

        for(int i=0;i<nums.size();i++)
        {
          if(cnt ==0)
          {
            ele = nums[i];
            cnt++;
          }
          else if(nums[i]==ele)
          {
            cnt++;
          }
          else cnt--;
        }


        return ele;
    }
};