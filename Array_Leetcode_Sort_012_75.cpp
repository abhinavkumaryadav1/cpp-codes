/*75. Sort Colors

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
       //brute force 
      // for(int i=0;i<nums.size();i++)
      // {
      //   for(int j=1;j<nums.size();j++)
      //   {
      //     if(nums[j]<nums[j-1])
      //     {
      //       swap(nums[j],nums[j-1]);
      //     }
      //   }
      // }

      //approch 2 optimal
    // Dutch national flag algorithm 3 pointers
    int i =0;
    int j =0;
    int k=nums.size()-1;

    while(j<=k)
    {
      if(nums[j]==0)
      {
        swap(nums[i],nums[j]);
        i++;
        j++;
      }

      else if(nums[j]==1)
      {
        j++;
      }

      else
      {
        swap(nums[j],nums[k]);
        k--;
      }
    }

    



    }
};