/*349. Intersection of Two Arrays
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans;

    int i=0;
    int j=0;
    int n= nums1.size();
    int m = nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    while(i<n && j<m)
    {
         while(i > 0 && i < n && nums1[i] == nums1[i-1]) i++;
         while(j > 0 && j < m && nums2[j] == nums2[j-1]) j++;

            if(i >= n || j >= m) break;

            if(nums1[i] < nums2[j]) {
                // ans.push_back(nums1[i]);
                i++;
            } else if(nums1[i] > nums2[j]) {
                // ans.push_back(nums2[j]);
                j++;
            } else { 
                // Both are equal
                ans.push_back(nums1[i]);
                i++;
                j++;
            
        }
    }

   


        return ans; 
    }
};