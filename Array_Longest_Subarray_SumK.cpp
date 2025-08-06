/*
Longest subarray with sum K (only positive numbers in array. if -ve honge to code fails)

Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.


Examples:
Input: nums = [10, 5, 2, 7, 1, 9],  k=15

Output: 4

Explanation:

The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4.

Input: nums = [-3, 2, 1], k=6

Output: 0

Explanation:

There is no sub-array in the array that sums to 6. Therefore, the output is 0.
*/

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        
        int st=0;
        int end=0;
        int n = nums.size();
        int currsum=0;
        int maxlen=0;

        while(end<n)
        {

            currsum+=nums[end];

            while(currsum>k && st<=end)
            {
                currsum = currsum-nums[st];
                st++;
            }
            if(currsum == k)
            {
                maxlen=max(maxlen,end-st+1);
            }
            end++;
        }

        return maxlen;

    }
};
